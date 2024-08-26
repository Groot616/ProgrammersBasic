#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    
    int dc = 0;
    if(n >= 10)
        dc = n / 10;
    answer = n * 12000 + (k-dc) * 2000;
        
    
    return answer;
}