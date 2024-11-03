#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    
    unordered_map<string, vector<string>> reported;
    unordered_map<string, int> reportedCnt;
    
    // 중복 신고 방지를 위한 unordered_set
    unordered_set<string> sortReport;
    for(int i = 0; i < report.size(); ++i)
        sortReport.insert(report[i]);
    
    // 누가 누구를 신고했는지와, 누가 몇번 신고당했는지에 대한 코드
    for(auto it = sortReport.begin(); it != sortReport.end(); ++it)
    {
        stringstream ss(*it);
        string who, call;
        ss >> who >> call;
        reported[who].push_back(call);
        reportedCnt[call]++;
    }
    
    // 신고한 사람이 몇번 신고당했는지 확인하는 코드
    unordered_map<string, int> result;
    for(const auto & e1 : reported)
    {
        for(const auto& e2 : e1.second)
        {
            auto it = reportedCnt.find(e2);
            if(it != reportedCnt.end() && it->second >= k)
                result[e1.first]++;
        }
    }
    
    for(const auto & e : result)
        cout << e.first << ", " << e.second << '\n';
    
    // 맵에서 id_list 순서대로 메세지를 받은 수를 push_back
    for(int i = 0; i < id_list.size(); ++i)
    {
        auto it = result.find(id_list[i]);
        if(it != result.end())
            answer.push_back(it->second);
        else
            answer.push_back(0);
    }
    
    /*for(const auto &e1 : reported)
    {
        cout << e1.first << " : ";
        for(const auto &e2 : e1.second)
            cout << e2 << " ";
        cout << '\n';
    }*/
    
    
    
    
    return answer;
}