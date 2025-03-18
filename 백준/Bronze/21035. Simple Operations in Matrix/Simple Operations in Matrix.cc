#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>

using namespace std;

vector<vector<int>> makeArr()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> retVec(row, vector<int>(col));

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            int tmp;
            cin >> tmp;
            retVec[i][j] = tmp;
        }
    }
    
    return retVec;
}

vector<vector<string>> makeTestCase()
{
    int testCase;
    cin >> testCase;
    cin.ignore();

    vector<vector<string>> retVec(testCase);
    for (int i = 0; i < testCase; ++i)
    {
        string order;
        getline(cin, order);
        stringstream ss(order);
        string word;
        while (getline(ss, word, ' '))
            retVec[i].push_back(word);
    }

    return retVec;
}

void changeArr(vector<vector<int>> &arr, const vector<vector<string>> testCase)
{
    for (int i = 0; i < testCase.size(); ++i)
    {
        if (testCase[i][0] == "row")
        {
            int rowIndex = stoi(testCase[i][1]) - 1;
            if (rowIndex >= 0 && rowIndex < arr.size())
            {
                for (int j = 0; j < arr[0].size(); ++j)
                    arr[stoi(testCase[i][1]) - 1][j] += stoi(testCase[i][2]);
            }
        }
        // testCase[i][0] == col
        else
        {
            int colIndex = stoi(testCase[i][1]) - 1;
            if (colIndex >= 0 && colIndex < arr[0].size())
            {
                for (int j = 0; j < arr.size(); ++j)
                    arr[j][stoi(testCase[i][1]) - 1] += stoi(testCase[i][2]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> arr = makeArr();
    vector<vector<string>> testCase = makeTestCase();
    
    changeArr(arr, testCase);
    
    int totalSum = accumulate(arr.begin(), arr.end(), 0,
        [](int sum, const vector<int> row)
        {
            return sum + accumulate(row.begin(), row.end(), 0);
        });
    
    int maxVal = 0;
    int minVal = 999999;
    for (const auto& row : arr)
    {
        for (const auto& col : row)
        {
            if (col > maxVal)
                maxVal = col;
            if (col < minVal)
                minVal = col;
        }
    }

    cout << totalSum << " " << minVal << " " << maxVal << '\n';

    return 0;
}
