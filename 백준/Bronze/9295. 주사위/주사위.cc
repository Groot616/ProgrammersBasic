#include <iostream>

using namespace std;

int main()
{
    int n;
    int dice1;
    int dice2;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> dice1 >> dice2;
        cout << "Case " << i + 1 << ": " << dice1 + dice2 << "\n";
    }

    return 0;
}