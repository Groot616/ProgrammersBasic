#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    
    // 0-1, 1-1, 3-1, 5-1, 6-1
    map<int, int> citationsCnt;
    for(int i = 0; i < citations.size(); ++i)
        citationsCnt[citations[i]]++;
    
    int totalCnt = citations.size();
    for(int i = totalCnt; i >= 0; --i)
    {
        int cnt = 0;
        for(auto it = citationsCnt.begin(); it != citationsCnt.end(); ++it)
        {
            if(it->first >= i)
                cnt += it->second;
        }
        if(i <= cnt)
        {
            answer = i;
            break;
        }
    }
    
    return answer;
}