#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    vector<int> rank;
    
    for(int i=0; i<score.size(); ++i)
    {
        if(i < k)
        {
            rank.push_back(score[i]);
            sort(rank.begin(), rank.end());
            answer.push_back(rank[0]);
        }
        else
        {
            if(score[i] >= rank[rank.size() - 1])
            {
                rank[0] = score[i];
                sort(rank.begin(), rank.end());
                answer.push_back(rank[0]);
            }
            else if(score[i] < rank[rank.size() - 1] && score[i] >= rank[0])
            {
                rank[0] = score[i];
                sort(rank.begin(), rank.end());
                answer.push_back(rank[0]);
            }
            else
                answer.push_back(rank[0]);
        }
    }
    
    return answer;
}