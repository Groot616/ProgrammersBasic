#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, r, c;

    cin >> n >> r >> c;
    vector<vector<char>> area(n, vector<char>(n, '.'));
    int startX = r % 2;
    int startY = c % 2;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i % 2 == startX && j % 2 == startY)
                area[i][j] = 'v';
            else if (i % 2 != startX && j % 2 != startY)
                area[i][j] = 'v';
        }
    }

    for (const auto e1 : area)
    {
        for (const auto e2 : e1)
            cout << e2;
        cout << '\n';
    }

    return 0;
}