#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    vector<int> nums;
    int sum = brown + yellow;
    for(int i = sqrt(sum); i >= 0; --i)
    {
        if(sum % i == 0)
        {
            if((i - 2) * (sum / i - 2) == yellow)
            {
                answer.push_back(sum / i);
                answer.push_back(i);
                break;
            }
        }
    }
    
    return answer;
}