#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> ptCnt;
    
    // unordered_map에 선수이름과 수 입력(동명이인일 경우를 대비)
    // completion을 순회하며 수 -1;
    // 모든 순회를 마치고 선수의 수가 0이 아닌 경우 해당 선수는 골인하지 못한 선수
    
    for(const auto& e : participant)
        ptCnt[e]++;
    
    for(int i=0; i<completion.size(); ++i)
    {
        if(ptCnt.find(completion[i]) != ptCnt.end())
            ptCnt[completion[i]]--;
    }
    for(auto it = ptCnt.begin(); it != ptCnt.end(); ++it)
    {
        if(it->second != 0)
            answer = it->first;
    }
    
    return answer;
}