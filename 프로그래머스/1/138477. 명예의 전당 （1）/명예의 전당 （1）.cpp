#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    vector<int> greatest;
    for(int i = 0; i < score.size(); ++i)
    {
        // 명예의 전당에 할당된 idx가 k 미만일 경우
        if(greatest.size() < k)
        {
            greatest.push_back(score[i]);
            answer.push_back(*min_element(greatest.begin(), greatest.end()));
        }
        else
        {
            greatest.push_back(score[i]);
            auto it = min_element(greatest.begin(), greatest.end());
            greatest.erase(it);
            answer.push_back(*min_element(greatest.begin(), greatest.end()));
        }
    }
    
    return answer;
}