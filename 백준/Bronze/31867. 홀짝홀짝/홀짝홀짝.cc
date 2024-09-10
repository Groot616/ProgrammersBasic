#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    string str;
    vector<int> num;

    cin >> n;
    cin >> str;
    for (int i = 0; i < str.length(); ++i)
    {
        num.push_back(str[i] - '0');
    }

    int odd = 0;
    int even = 0;
    for (const auto& e : num)
    {
        if (e % 2 == 0)
            ++even;
        else
            ++odd;
    }

    if (odd > even)
        cout << "1" << "\n";
    else if (odd < even)
        cout << "0" << "\n";
    else
        cout << "-1" << "\n";
    
    return 0;
}