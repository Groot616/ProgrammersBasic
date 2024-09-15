#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    double root = sqrt(n);
    if(pow(ceil(root), 2) == n)
        answer = pow(root + 1, 2);
    else
        answer = -1;
    
    return answer;
}