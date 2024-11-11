#include <vector>
#include <iostream>

using namespace std;

vector<long long> tile;

int dp(long long n)
{
    if (n == 0) return 0;
    else
    {
        if (tile[n] != 0)
            return tile[n];
        else
        {
            tile[n] = (dp(n - 1) + dp(n - 2)) % 10007;
            return tile[n];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;

    cin >> n;
    tile.resize(n + 1);
    tile[0] = 0;
    tile[1] = 1;
    tile[2] = 2;
    cout << dp(n) << '\n';

    return 0;
}

