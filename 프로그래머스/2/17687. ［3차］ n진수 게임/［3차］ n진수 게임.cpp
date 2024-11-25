#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>

using namespace std;

const vector<char> baseN = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

string changeBase(int num, const int& n)
{
    string retStr = "";
    stack<char> st;
    while (num != 0)
    {
        int result = num % n;
        st.push(baseN[result]);
        num /= n;
    }
    while (!st.empty())
    {
        retStr += st.top();
        st.pop();
    }
    return retStr;
}

string solution(int n, int t, int m, int p) {
    string answer = "";

    vector<char> myBase;
    for (int i = 0; i < n; ++i)
        myBase.push_back(baseN[i]);

    int cnt = 0;
    int start = 0;
    queue<char> qCh;
    qCh.push('0');
    for (int i = 0; i < 1000000; ++i)
    {
        string tmp = changeBase(start, n);
        for (int j = 0; j < tmp.length(); ++j)
            qCh.push(tmp[j]);
        ++start;
    }
    for (int i = 0; i < p - 1; ++i)
        qCh.pop();
    answer += qCh.front();
    qCh.pop();
    ++cnt;

    while (cnt < t)
    {
        if (qCh.size() > m)
        {
            for (int i = 0; i < m - 1; ++i)
                qCh.pop();
        }
        else
        {
            string tmp = changeBase(start, n);
            for (int i = 0; i < tmp.length(); ++i)
                qCh.push(tmp[i]);
            for (int i = 0; i < m; ++i)
                qCh.pop();
        }

        answer += qCh.front();
        qCh.pop();
        ++cnt;
    }

    return answer;
}