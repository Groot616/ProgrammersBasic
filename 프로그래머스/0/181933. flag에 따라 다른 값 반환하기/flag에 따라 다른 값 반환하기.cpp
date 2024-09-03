#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) {
    int answer = 0;
    
    flag == true ? answer = a + b : answer = a - b;
    
    return answer;
}