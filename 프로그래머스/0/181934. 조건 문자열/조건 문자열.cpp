#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    
    if(ineq == ">" && eq == "=")
        n >= m ? answer = 1 : answer = 0;
    if(ineq == "<" && eq == "=")
        n <= m ? answer = 1 : answer = 0;
    if(ineq == ">" && eq == "!")
        n > m ? answer = 1 : answer = 0;
    if(ineq == "<" && eq =="!")
        n < m ? answer = 1 : answer = 0;
    
    return answer;
}