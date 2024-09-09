#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "";
    int cnt = 0;

    for (int i = 1; ; ++i)
    {
        getline(cin, str);
        ++cnt;
        if (str == "0")
        {
            --cnt;
            break;
        }
    }

    for (int i = 0; i < cnt; ++i)
        cout << "Case " << i + 1 << ": Sorting... done!" << "\n";

    return 0;
}