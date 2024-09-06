#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool studentcomp(pair<int, int> stu1, pair<int, int> stu2)
{
    return stu1.second < stu2.second;
}

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    vector<pair<int, int>> student;
    for(int i=0; i<attendance.size(); ++i)
    {
        if(attendance[i]) student.push_back({i, rank[i]});
    }
    sort(student.begin(), student.end(), studentcomp);
    answer = 10000 * student[0].first + 100 * student[1].first + student[2].first;
    
    return answer;
}