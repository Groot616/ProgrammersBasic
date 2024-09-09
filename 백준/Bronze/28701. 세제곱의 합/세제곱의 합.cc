#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << fixed;
    cout.precision(0);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    cout << sum << "\n";
    sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    cout << pow(sum, 2) << "\n";
    sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += pow(i, 3);
    }
    cout << sum << "\n";
    
    return 0;
}