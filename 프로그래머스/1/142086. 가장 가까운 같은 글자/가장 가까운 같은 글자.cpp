#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    unordered_map<char, int> visited;
    
    answer.resize(s.length());
    for(int i=0; i<s.length(); ++i)
    {
        if(visited.find(s[i]) == visited.end())
        {    
            visited[s[i]] = i;
            answer[i] = -1;
        }
        else
        {
            auto it = visited.find(s[i]);
            answer[i] = i - it->second;
            it->second = i;
        }
    }
    
    return answer;
}