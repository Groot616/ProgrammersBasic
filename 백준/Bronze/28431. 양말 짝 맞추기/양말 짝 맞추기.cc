#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> socks;
    for (int i = 0; i < 5; ++i)
    {
        int num;
        cin >> num;
        socks[num]++;
    }
    for (auto it = socks.begin(); it != socks.end(); ++it)
    {
        if (it->second % 2 == 1)
            cout << it->first << "\n";
    }

    return 0;
}