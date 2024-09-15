#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    int lastCola = 0;
    int newCola = 0;
    while (true)
    {
        // 빈병 n개를 가져다주면 a개당 b개 새로운 콜라로 바꾸는 식 : n / a * b
        // 남는 빈병식 : n % a;
        newCola += n / a * b;
        lastCola += n % a;
        n = n / a * b;
        if (n + lastCola / a >= 1)
        {
            n += lastCola;
            lastCola = 0;
        }
        if (n / a == 0)
            break;
    }
    answer = newCola;
    
    return answer;
}

int main()
{
    solution(2, 1, 20);
    return 0;
}