#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int s;

    while (cin >> n >> s)
    {
        cout << s / (n + 1) << "\n";
    }

    return 0;
}