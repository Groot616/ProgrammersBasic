#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int divisor;
    int total = brown + yellow;
    for(int i = sqrt(total); i >= 1; --i)
    {
        if(total % i == 0)
        {
            divisor = i;
            if((divisor - 2) * ((total / divisor) - 2) == yellow)
                break;
        }
    }
    answer.push_back(divisor);
    answer.push_back(total / divisor);
    sort(answer.rbegin(), answer.rend());
    
    return answer;
}