#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    
    sort(num_list.begin(), num_list.end());
    for(const auto& e : num_list)
    {
        if(e == n)
        {
            answer = 1;
            break;
        }
        else if(e > n)
        {
            answer = 0;
            break;
        }
    }
    
    return answer;
}