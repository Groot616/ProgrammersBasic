#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(pair<int, double> &a, pair<int, double> &b)
{
    if(a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    map<int, double> clearCnt;
    vector<pair<int, double>> clearRate(N);
    
    // map에 스테이지별 실패인원 할당
    for(int i = 0; i < stages.size(); ++i)
        clearCnt[stages[i]]++;
    
    // vector에 스테이지 단계 추가
    double total = stages.size();
    for(int i = 0; i < clearRate.size(); ++i)
        clearRate[i].first = i + 1;
    
    // vector에 스테이지별 실패율 추가
    for(auto it = clearCnt.begin(); it != clearCnt.end(); ++it)
    {
        if(it->first < N + 1)
        {
            if(total != 0)
            {
                clearRate[it->first - 1].second = it->second / total;
                total -= it->second;
            }
        }
    }
    sort(clearRate.begin(), clearRate.end(), compare);
    
    for(const auto e : clearRate)
        answer.push_back(e.first);
    
    return answer;
}