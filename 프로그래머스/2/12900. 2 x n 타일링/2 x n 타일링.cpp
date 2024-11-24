#include <string>
#include <vector>

using namespace std;

vector<int> memo(600000, 0);

int dp(int n)
{
    if (memo[n] != 0) return memo[n] % 1000000007;
    else
    {
        memo[n] = dp(n - 1) + dp(n - 2);
        return memo[n] % 1000000007;
    }
}

int solution(int n) {
    int answer = 0;

    memo[0] = 1;
    memo[1] = 2;
    answer = dp(n - 1);

    return answer;
}