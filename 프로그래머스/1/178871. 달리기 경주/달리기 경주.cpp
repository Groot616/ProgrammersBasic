#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    
    unordered_map<string, int> playerIdx;
    for(int i = 0; i < players.size(); ++i)
        playerIdx[players[i]] = i;
    
    for(const auto name : callings)
    {
        int idx = playerIdx[name];
        
        swap(players[idx], players[idx - 1]);
        playerIdx[players[idx]] = idx;
        playerIdx[players[idx - 1]] = idx - 1;
    }
    answer = players;
    
    return answer;
}