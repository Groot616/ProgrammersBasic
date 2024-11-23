#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    queue<int> dDay;
    for(int i = 0; i < progresses.size(); ++i)
    {
        int endDay = 0;
        while(true)
        {
            progresses[i] += speeds[i];
            ++endDay;
            if(progresses[i] >= 100)
                break;
        }
        dDay.push(endDay);
    }
    
    int first = dDay.front();
    dDay.pop();
    int totalCnt = 1;
    while(!dDay.empty())
    {
        if(dDay.front() <= first)
        {
            ++totalCnt;
            dDay.pop();
        }
        else
        {
            answer.push_back(totalCnt);
            first = dDay.front();
            dDay.pop();
            totalCnt = 1;
        }
    }
    answer.push_back(totalCnt);
        
    return answer;
}