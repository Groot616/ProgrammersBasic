#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int zeroCnt = 0;
    int correctCnt = 0;
    for(int i = 0; i < lottos.size(); ++i)
    {
        if(lottos[i] != 0)
        {
            auto it = find(win_nums.begin(), win_nums.end(), lottos[i]);
            if(it != win_nums.end())
                ++correctCnt;
        }
        else
            ++zeroCnt;
    }
    if(zeroCnt == 0 && correctCnt == 0)
    {
        answer.push_back(6);
        answer.push_back(6);
    }
    else if(zeroCnt == 6)
    {
        answer.push_back(1);
        answer.push_back(6);
    }
    else
    {
        answer.push_back(6 - (correctCnt + zeroCnt) + 1);
        answer.push_back(6 - correctCnt + 1);
    }
    
    return answer;
}