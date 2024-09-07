#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;

    int start = 1;
    while (n > 0)
    {
        // 조건1 3의 배수인 경우 숫자만 올리고 n은 내리지 않음(o)
        // 조건2 1의 자리수가 3인 경우 숫자만 올리고 n은 내리지 않음
        // 조건3 10의 자리수가 3인 경우 숫자만 올리고 n은 내리지 않음
        if(start % 3 == 0 || start % 10 == 3 || (start % 100 >= 30 && start % 100 <= 39) || (start >=30 && start <= 39))
            ++start;
        else
        {
            --n;
            if(n == 0) break;
            ++start;
        }
    }
    // 1 2 4 5 7 8 10 11 14 16 17 19 20 22 25 26 28 29 40 41 44 46 47 49 50 52 55 56 58 59 61 62 64
    answer = start;

    return answer;
}