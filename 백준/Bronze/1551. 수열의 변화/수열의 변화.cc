#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n;
    int cnt;
    string numStr;
    vector<int> arr;

    cin >> n >> cnt;
    cin >> numStr;

    stringstream ss(numStr);
    string word;
    while (getline(ss, word, ','))
    {
        arr.push_back(stoi(word));
    }

    vector<int> tmpArr(arr);
    for (int i = 0; i < cnt; ++i)
    {
        arr.clear();
        for (int j = 0; j < n - i - 1; ++j)
        {
            arr.push_back(tmpArr[j + 1] - tmpArr[j]);
        }
        tmpArr.clear();
        tmpArr = arr;
    }

    cout << arr[0];
    for (int i = 1; i < arr.size(); ++i)
        cout << "," << arr[i];

    return 0;
}