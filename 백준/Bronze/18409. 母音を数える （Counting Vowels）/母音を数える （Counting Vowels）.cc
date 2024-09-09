#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int size;
    string str;
    vector<char> element;

    cin >> size;
    cin >> str;

    for (int i = 0; i < size; ++i)
        element.push_back(str[i]);

    int cnt = 0;
    for (const auto& e : element)
    {
        if (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u')
            ++cnt;
    }

    cout << cnt << "\n";

    return 0;
}