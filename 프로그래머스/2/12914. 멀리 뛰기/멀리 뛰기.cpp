#include <string>
#include <vector>

using namespace std;

const int MOD = 1234567;

long long solution(int n) {
    long long answer = 0;
    
    vector<long long> memo(n + 1, 0);
    memo[1] = 1;
    memo[2] = 2;
    
    if(n == 1)
        answer = 1;
    else if(n == 2)
        answer = 2;
    else
    {
        int idx = 3;
        while(idx <= n)
        {
            memo[idx] = (memo[idx - 2] + memo[idx - 1]) % MOD;
            ++idx;
        }
        answer = memo[n];
    }
    
    return answer;
}