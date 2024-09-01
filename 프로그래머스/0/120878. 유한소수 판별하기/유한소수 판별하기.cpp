#include <string>
#include <vector>
#include <stack>

using namespace std;

int getGCD(int a, int b)
{
    if (b == 0) return a;
    return getGCD(b, a % b);
}

int solution(int a, int b) {
    int answer = 0;
    
    // 1. 최대공약수 구하기(유클리드 호제법)
    int result = 0;
    a > b ? result = getGCD(a, b) : result = getGCD(a, b);
   
    // 2. 분모를 최대 공약수로 나눈 값이 2와 5로 이뤄진 수일 경우 answer = 1, 그렇지 않으면 2 
    b /= result;
    while(1)
    {
        if(b % 2 == 0) b /= 2;
        else if(b % 5 == 0) b /= 5;
        else
            break;
    }
    b == 1 ? answer = 1 : answer = 2;
    
   
    
    
    return answer;
}