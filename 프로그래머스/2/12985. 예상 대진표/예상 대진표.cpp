#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    
    // 같은 대진표에 있을 경우
    if(abs(a - b) == 1 && (a + 1) / 2 == (b + 1) / 2)
        return answer;
    else
    {
        while(true)
        {
            a = (a + 1) / 2;
            b = (b + 1) / 2;
            ++answer;
            if(abs(a - b) == 1 && (a + 1) / 2 == (b + 1) / 2)
                break;;
        }
    }

    return answer;
}