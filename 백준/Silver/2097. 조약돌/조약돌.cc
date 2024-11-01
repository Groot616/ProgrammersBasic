#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int rock;

    cin >> rock;
    int idx = 1;
    while (true)
    {
        if (rock <= (idx + 1) * (idx + 1))
            break;
        else
            ++idx;
    }
    if (idx == 1)
        cout << 4 << '\n';
    else
        cout << 2 * idx + 2 * ((int)ceil((double)rock / (double)(idx + 1)) - 1);

    return 0;
}