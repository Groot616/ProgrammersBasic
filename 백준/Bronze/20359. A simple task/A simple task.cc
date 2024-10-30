#include <iostream>
#include <cmath>

using namespace std;

int getExponential(int n)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            ++cnt;
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;
    int exponential = getExponential(n);
    cout << n / (int)pow(2, exponential)  << " " << exponential << '\n';

    return 0;
}