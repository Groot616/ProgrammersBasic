#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    
    queue<string> card1;
    queue<string> card2;
    for(const auto e : cards1)
        card1.push(e);
    for(const auto e : cards2)
        card2.push(e);
    
    bool bCanMake = false;
    for(int i = 0; i < goal.size(); ++i)
    {
        if(card1.front() == goal[i])
        {
            bCanMake = true;
            card1.pop();
        }
        else if(card2.front() == goal[i])
        {
            bCanMake = true;
            card2.pop();
        }
        else
        {
            bCanMake = false;
            break;
        }   
    }
    bCanMake ? answer = "Yes" : answer = "No";
    
    return answer;
}