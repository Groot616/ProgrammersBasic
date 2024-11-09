#include <string>
#include <vector>

using namespace std;

vector<long long> fibo;

long long fibonacci(long long n)
{
    if(n == 0 || n == 1)
        return 1;
    else
    {
        if(fibo[n] != 0)
            return fibo[n] % 1234567;
        else
        {
            fibo[n] = (fibonacci(n - 2) + fibonacci(n - 1)) % 1234567;
            return fibo[n];
        }
    }
}

int solution(int n) {
    int answer = 0;
    
    fibo.resize(n);
    fibo[0] = fibo[1] = 1;
    answer = fibonacci(n - 1) % 1234567;
    
    return answer;
}