#include <string>
#include <vector>
#include <cmath>

using namespace std;

void getDivisor(int n, vector<int>& divisor)
{
    int element = sqrt(2 * n);
    for(int i = 1; i <= element; ++i)
    {
        if((2 * n) % i == 0)
        {
            divisor.push_back(i);
            int other = (2 * n) / i;
            if(other != i)
                divisor.push_back(other);
        }
    }
}

int solution(int n) {
    int answer = 0;
    
    vector<int> divisor;
    getDivisor(n, divisor);
    
    // a = (2 * n - k * (k - 1)) / (2 * k)에서 a가 1 이상의 정수인 경우만 가능
    for(int i = 0; i < divisor.size(); ++i)
    {
        double a = (2.0 * n - divisor[i] * (divisor[i] - 1)) / (2.0 * divisor[i]);
        if(fmod(a, 1.0) == 0.0 && a >= 1.0)
            ++answer;
    }
    
    return answer;
}