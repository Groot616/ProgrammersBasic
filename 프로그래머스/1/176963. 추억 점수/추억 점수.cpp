#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    unordered_map<string, int> nameScore;
    for(int i=0; i<name.size(); ++i)
        nameScore[name[i]] = yearning[i];
    
    for(int i=0; i<photo.size(); ++i)
    {
        int sum = 0;
        for(int j=0; j<photo[i].size(); ++j)
        {
            for(const auto& e : nameScore)
            {
                if(e.first == photo[i][j])
                    sum += e.second;
            }
        }
        answer.push_back(sum);
    }
    
    return answer;
}