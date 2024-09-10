#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;
    vector<char> element = { 'a', 'e', 'i', 'o', 'u' };

    cin >> str;

    int cnt = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        for (int j = 0; j < element.size(); ++j)
        {
            if (str[i] == element[j])
                ++cnt;
        }
    }
    cout << cnt << "\n";

    return 0;
}