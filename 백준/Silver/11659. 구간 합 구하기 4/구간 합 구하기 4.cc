#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    vector<int> nums;

    cin >> n >> m;
    vector<int> sums(n);

    int totalSum = 0;
    for (int i = 0; i < n; ++i)
    {
        int n1;
        cin >> n1;
        totalSum += n1;
        sums[i] = totalSum;
    }

    for (int i = 0; i < m; ++i)
    {
        int n1, n2;
        cin >> n1 >> n2;
        if (n1 == 1)
            cout << sums[n2 - 1] << '\n';
        else
            cout << sums[n2 - 1] - sums[n1 - 2] << '\n';
    }

    return 0;
}