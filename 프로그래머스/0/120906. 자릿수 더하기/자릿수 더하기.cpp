#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;

    size_t size = to_string(n).length();

    for (int i = 0; i < size; ++i)
    {
        if (n > 10)
        {
            answer += n / pow(10, size - (i + 1));
            n = n % static_cast<int>(pow(10, size - (i + 1)));
        }
        else
        {
            answer += n;
        }
    }
    return answer;
}