#include <iostream>

using namespace std;

int main()
{
    int n;
    int pos = 0;
    int move = 0;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> move;
        pos += move;
    }

    if (pos == 0)
        cout << "Stay" << "\n";
    else if (pos > 0)
        cout << "Right" << "\n";
    else
        cout << "Left" << "\n";

    return 0;
}