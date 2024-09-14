#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map<int, int> pocketmonCnt;
    
    for(const auto& num : nums)
        pocketmonCnt[num]++;
    
    int limit = nums.size() / 2;
    if(pocketmonCnt.size() <= limit)
        answer = pocketmonCnt.size();
    else
        answer = limit;
    
    return answer;
}