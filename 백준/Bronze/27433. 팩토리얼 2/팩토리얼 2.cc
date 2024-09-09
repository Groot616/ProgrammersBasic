#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned long long sum = 1;

    cin >> n;
    if (n == 0)
        sum = 1;
    else
    {
        while (n >= 1)
        {
            sum *= n;
            --n;
        }
    }
    cout << sum << "\n";

    return 0;
}