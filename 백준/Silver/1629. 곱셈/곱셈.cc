#include <iostream>

using namespace std;

long long dp(const long long& a, const long long& b, const long long& c)
{
    if (b == 0) return 1;
    if (b == 1) return a % c;

    long long half = dp(a, b / 2, c);
    half = (half * half % c);

    if (b % 2 == 1)
        half = (half * a) % c;
    return half;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;

    cout << dp(a, b, c) << '\n';

    return 0;
}