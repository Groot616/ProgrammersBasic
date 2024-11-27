#include <iostream>
#include <vector>

using namespace std;

void recursion(const vector<vector<int>>& arr, string& answer)
{
    int start = arr[0][0];
    bool bCanZip = true;
    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = 0; j < arr[i].size(); ++j)
        {
            if (arr[0][0] != arr[i][j])
            {
                bCanZip = false;
                break;
            }
        }
        if (!bCanZip)
            break;
    }

    if (bCanZip)
    {
        if (arr[0][0] == 0)
            answer += '0';
        else
            answer += '1';
    }
    else
    {
        for (int i = 0; i < 4; ++i)
        {
            if (i == 0)
                answer += '(';
            vector<vector<int>> newArr(arr.size() / 2, vector<int>(arr.size() / 2));
            for (int j = 0; j < arr.size() / 2; ++j)
            {
                for (int k = 0; k < arr.size() / 2; ++k)
                    newArr[j][k] = arr[arr.size() / 2 * (i / 2) + j][arr.size() / 2 * (i % 2) + k];
            }
            recursion(newArr, answer);
            if (i == 3)
                answer += ')';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string answer = "";
    int n;
    vector<vector<int>> arr;

    cin >> n;
    arr.resize(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        string num;
        cin >> num;
        for (int j = 0; j < num.length(); ++j)
            arr[i][j] = num[j] - '0';
    }
    recursion(arr, answer);
    cout << answer << '\n';

    return 0;
}