#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int combination(const int& n, const int& k)
{
    int retVal = 1;
    for(int i = 1; i <= k; ++i)
        retVal *= (n - k + i) / i;
    return retVal;
}

void makeInfo(unordered_map<string, vector<string>>& info, const vector<vector<string>> clothes)
{
    for(int i = 0; i < clothes.size(); ++i)
    {
        string name = clothes[i][0];
        string pos = clothes[i][1];
        info[pos].push_back(name);
    }
}

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    unordered_map<string, vector<string>> info;
    vector<int> clothCnt;
    makeInfo(info, clothes);
    
    for(auto part : info)
        clothCnt.push_back(part.second.size());
    for(int i = 0; i < clothCnt.size(); ++i)
        answer *= combination(clothCnt[i] + 1, 1);
    answer -= 1;
    
    return answer;
}