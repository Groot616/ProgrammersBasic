#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool findSameNum(const vector<string> studentNum)
{
    bool bFind = false;
    for (int i = 0; i < studentNum.size() - 1; ++i)
    {
        for (int j = i + 1; j < studentNum.size(); ++j)
        {
            if (studentNum[i] == studentNum[j])
            {
                bFind = true;
                break;
            }
            if (bFind)
                break;
        }
    }
    return bFind;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer = 0;
    int n;
    vector<string> studentNum;
    
    cin >> n;
    studentNum.resize(n);
    for (auto& x : studentNum) cin >> x;

    while (true)
    {
        bool bFind = findSameNum(studentNum);
        if (bFind)
        {
            answer = studentNum[0].length() + 1;
            break;
        }

        for (int i = 0; i < studentNum.size(); ++i)
            studentNum[i].erase(0, 1);
    }
    cout << answer << '\n';
    
    return 0;
}