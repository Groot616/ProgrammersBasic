#include <string>
#include <vector>
#include <iostream>

using namespace std;

void makeInfo(const vector<int> lost, const vector<int> reserve, vector<int> &studentInfo)
{
    for(const auto e : lost)
        studentInfo[e - 1] -= 1;
    for(const auto e : reserve)
        studentInfo[e - 1] += 1;
}
    
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> studentInfo;
    studentInfo.resize(n, 1);
    makeInfo(lost, reserve, studentInfo);
    
    for(const auto e : studentInfo)
        cout << e << " ";
    cout << '\n';
    
    for(int i = 0; i < studentInfo.size(); ++i)
    {
        if(studentInfo[i] == 2)
        {
            if(i - 1 >= 0 && studentInfo[i - 1] == 0)
            {
                studentInfo[i - 1] += 1;
                studentInfo[i] -= 1;
            }
            else if(i + 1 < studentInfo.size() && studentInfo[i + 1] == 0)
            {
                studentInfo[i + 1] += 1;
                studentInfo[i] -= 1;
            }
        }
    }
    
    for(const auto e : studentInfo)
        cout << e << " ";
    cout << '\n';
    
    for(const auto e : studentInfo)
    {
        if(e >= 1)
            ++answer;
    }
    
    return answer;
}