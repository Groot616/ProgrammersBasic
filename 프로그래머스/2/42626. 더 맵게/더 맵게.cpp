#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < scoville.size(); ++i)
        pq.push(scoville[i]);
    
    while(true)
    {
        int top1 = pq.top();
        pq.pop();
        int top2 = pq.top();
        pq.pop();
        if(top1 < K || top2 < K)
        {
            pq.push(min(top1, top2) + 2 * max(top1, top2));
            ++answer;
        }
        
        if(top1 >= K && top2 >= K)
            break;
        
        if(pq.top() < K && pq.size() == 1)
        {
            answer = -1;
            break;
        }
    }
    
    return answer;
}