#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> last;
    while(n > 0)
    {
        last.push_back(n % 3);
        n /= 3;
    }
    reverse(last.begin(), last.end());
    for(int i=0; i<last.size(); ++i)
        answer += last[i] * pow(3, i);
    
    return answer;
}