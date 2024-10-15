#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, m;

    // 서로 다른 공격하는 쌍의 최대개수는 모든 칸에 퀸이 있다고 가정
    // 대각선 공격 = ((n * 2) - 2) * (m - 1);
    // 가로 세로 공격 = 2 * ((n - 1) * (m - 1));
    cin >> n >> m;
    
    cout << ((n * 2) - 2) * (m - 1) + n * (m - 1) + m * (n - 1) << '\n';

    return 0;
}