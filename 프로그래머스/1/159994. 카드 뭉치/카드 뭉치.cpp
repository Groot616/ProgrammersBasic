#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    
    queue<string> qCards1;
    queue<string> qCards2;
    queue<string> qGoal;
    for(const auto& e : cards1)
        qCards1.push(e);
    for(const auto& e : cards2)
        qCards2.push(e);
    for(const auto& e : goal)
        qGoal.push(e);
    
    bool bFlag = true;
    for(int i = 0; i < goal.size(); ++i)
    {
        string tmp1 = qCards1.front();
        string tmp2 = qCards2.front();
        string tmp3 = qGoal.front();
        if(tmp1 == tmp3)
        {
            qCards1.pop();
            qGoal.pop();
        }
        else if(tmp2 == tmp3)
        {
            qCards2.pop();
            qGoal.pop();
        }
        else
        {
            bFlag = false;
            break;
        }
    }
    if(bFlag)
        answer = "Yes";
    else
        answer = "No";
    
    return answer;
}