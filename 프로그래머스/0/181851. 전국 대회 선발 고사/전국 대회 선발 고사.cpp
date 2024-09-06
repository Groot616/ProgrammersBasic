#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;

    int cnt = 0;
    for (const auto& e : attendance)
    {
        if (e == true)
            ++cnt;
    }

    vector<vector<int>> rankAttendance(cnt, vector<int>(2));
    //cout << rankAttendance.size() << ", " << rankAttendance[3].size() << endl;
    int arrNum = 0;
    for (int i = 0; i< attendance.size(); ++i/*const auto& e : attendance*/)
    {
        if (attendance[i] == true/*e == true*/)
        {
            for (int j = i; j < attendance.size(); ++j)
            {
                rankAttendance[arrNum][0] = rank[j];
                rankAttendance[arrNum][1] = j;
                ++arrNum;
                break;
            }
        }  
    }
    sort(rankAttendance.begin(), rankAttendance.end());
    answer = rankAttendance[0][1] * 10000 + rankAttendance[1][1] * 100 + rankAttendance[2][1];

    return answer;
}