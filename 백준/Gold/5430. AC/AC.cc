#include <iostream>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

void makeArray(string &arrInfo, deque<int>& dq)
{
    arrInfo.erase(0, 1);
    arrInfo.erase(arrInfo.length() - 1, 1);
    stringstream ss(arrInfo);
    string num;
    while (getline(ss, num, ','))
        if(!num.empty())
            dq.push_back(stoi(num));
}

void printArray(int test)
{
    for (int i = 0; i < test; ++i)
    {
        string p;
        int arrCnt;
        string arrInfo;
        deque<int> dq;

        cin >> p;
        cin >> arrCnt;
        cin >> arrInfo;
        cin.ignore();

        makeArray(arrInfo, dq);
        bool bErrorAccured = false;
        bool bIsReverse = false;
        for (char cmd : p)
        {
            if(cmd == 'R')
                bIsReverse = !bIsReverse;
            else if (cmd == 'D')
            {
                if (dq.empty())
                {
                    cout << "error" << '\n';
                    bErrorAccured = true;
                    break;
                }
                else
                {
                    if (bIsReverse)
                        dq.pop_back();
                    else
                        dq.pop_front();
                }
            }
        }

        if (!bErrorAccured)
        {
            cout << "[";
            if (bIsReverse)
            {
                for (auto it = dq.rbegin(); it != dq.rend(); ++it)
                {
                    if (it != dq.rbegin()) cout << ",";
                    cout << *it;
                }
            }
            else
            {
                for (auto it = dq.begin(); it != dq.end(); ++it)
                {
                    if (it != dq.begin()) cout << ",";
                    cout << *it;
                }
            }
            cout << "]" << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;

    cin >> test;
    printArray(test);

    return 0;
}