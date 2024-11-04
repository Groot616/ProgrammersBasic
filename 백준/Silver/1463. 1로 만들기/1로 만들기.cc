#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr(1000002, 0);

int getCnt(int n)
{
    if (n == 0 || n == 1) return arr[n];
    else
    {
        if (arr[n] != 0) return arr[n];
        else
        {
            int tmp1 = getCnt(n - 1) + 1;
            int tmp2 = (n % 3 == 0) ? getCnt(n / 3) + 1 : 999999;
            int tmp3 = (n % 2 == 0) ? getCnt(n / 2) + 1 : 999999;
            arr[n] = min({ tmp1, tmp2, tmp3 });
            
            return arr[n];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // dp[0]/ d[1] = 0 dp[2] = 1 dp[3] = 1 dp[4] = 2 dp[5] = 3 dp[6]
    int answer = 0;
    int n;

    cin >> n;
    arr[0] = arr[1] = 0;
    arr[2] = arr[3] = 1;
    answer = getCnt(n);
    cout << answer << '\n';

    return 0;
}