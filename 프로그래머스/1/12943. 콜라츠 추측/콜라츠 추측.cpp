#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    
    unsigned long long n = num;
    
    if(num == 1)
    {
        answer = 0;
        return answer;
    }
    
    int cnt = 0;
    while(cnt <= 500)
    {
        if(cnt == 500)
        {
            answer = -1;
            break;
        }
        
        if(n % 2 == 0)
        {
            n /= 2;
            ++cnt;
            if(n == 1)
            {
                answer = cnt;
                break;
            }
        }
        else
        {
            n = (n * 3) + 1;
            ++cnt;
            if(n == 1)
            {
                answer = cnt;
                break;
            }
        }
    }
    
    return answer;
}