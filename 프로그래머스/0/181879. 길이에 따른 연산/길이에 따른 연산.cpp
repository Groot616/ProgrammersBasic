#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int length = num_list.size();
    int mul = 1;
    if(length <= 10)
    {
        for(const auto& e : num_list)
        {   mul *= e;
            answer = mul;
        }
    }
    else
    {
        for(const auto& e : num_list)
        {
            answer += e;
        }
    }
    
    return answer;
}