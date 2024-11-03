#include <string>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

void getTime(const string strTime, vector<int> &time)
{
    stringstream ss(strTime);
    string word;
    int min, sec;
    if(getline(ss, word, ':')) min = stoi(word);
    if(getline(ss, word, ':')) sec = stoi(word);
    time.push_back(60 * min + sec);
}
       
string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    vector<int> totalTime;
    getTime(video_len, totalTime);
    getTime(pos, totalTime);
    getTime(op_start, totalTime);
    getTime(op_end, totalTime);
    
    for(const auto e : totalTime)
        cout << e << '\n';
    
    for(int i = 0; i < commands.size(); ++i)
    {
        if(totalTime[1] >= totalTime[2] && totalTime[1] <= totalTime[3])
            totalTime[1] = totalTime[3];
        
        if(commands[i] == "prev")
        {
            if(totalTime[1] - 10 < 0)
                totalTime[1] = 0;
            else
                totalTime[1] -= 10;
            
            if(totalTime[1] >= totalTime[2] && totalTime[1] <= totalTime[3])
                totalTime[1] = totalTime[3];
        }
        else
        {
            if(totalTime[1] + 10 > totalTime[0])
                totalTime[1] = totalTime[0];
            else
                totalTime[1] += 10;
            
            if(totalTime[1] >= totalTime[2] && totalTime[1] <= totalTime[3])
                totalTime[1] = totalTime[3];
        }
    }
    string min = to_string(totalTime[1] / 60);
    string sec = to_string(totalTime[1] % 60);
    if(min.length() == 1) min = "0" + min;
    if(sec.length() == 1) sec = "0" + sec;
    answer = min + ":" + sec;
    
    return answer;
}