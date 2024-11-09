#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    if(a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    vector<pair<int, int>> result;
    map<int, int> tangerineCnt;
    for(int i = 0; i < tangerine.size(); ++i)
        tangerineCnt[tangerine[i]]++;
    for(auto total : tangerineCnt)
        result.emplace_back(total.first, total.second);
    
    sort(result.begin(), result.end(), compare);
    if(result[0].second >= k)
    {
        answer = 1;
        return answer;
    }
    
    for(int i = 0; i < result.size(); ++i)
    {

        if(k - result[i].second >= 0)
        {
            k -= result[i].second;
            ++answer;
        }
        else if(k - result[i].second < 0)
        {
            ++answer;
            break;
        }
        
        if(k == 0)
            break;
    }
    
    return answer;
}