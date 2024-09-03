#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    
    number % n == 0 && number % m == 0 ? answer = 1 : answer = 0;
    
    return answer;
}