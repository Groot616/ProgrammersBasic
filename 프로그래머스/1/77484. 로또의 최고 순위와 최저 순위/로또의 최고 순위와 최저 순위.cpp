#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    set<int> winNum;
    set<int> myNum;
    for(const auto e : win_nums)
        winNum.insert(e);
    for(const auto e : lottos)
        myNum.insert(e);
    
    int correct = 0;
    for(auto it = myNum.begin(); it != myNum.end(); ++it)
    {
        if(winNum.find(*it) != winNum.end())
            ++correct;
    }
    
    int zeroCnt = 0;
    for(auto e : lottos)
    {
        if(e == 0)
            zeroCnt++;
    }
    
    if(zeroCnt == 6)
    {
        answer.push_back(1);
        answer.push_back(6);
    }
    else if(correct == 0)
    {
        answer.push_back(6);
        answer.push_back(6);
    }
    else
    {
        answer.push_back(lottos.size() + 1 - (correct + zeroCnt));
        answer.push_back(lottos.size() + 1 - correct);
    }
    
    return answer;
}