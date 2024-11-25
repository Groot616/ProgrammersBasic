#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

struct UserInfo
{
    string nickname;
    bool bIsEnter;

    UserInfo() : nickname(""), bIsEnter(false) {};
    UserInfo(string nickname, bool bIsEnter) : nickname(nickname), bIsEnter(bIsEnter) {}
};

void makeInfo(const vector<string>& record, unordered_map<string, UserInfo>& data, queue<pair<string, bool>>& qEnterInfo)
{
    for (int i = 0; i < record.size(); ++i)
    {
        stringstream ss(record[i]);
        string enterInfo, userID, userNickname;
        ss >> enterInfo >> userID >> userNickname;

        bool bEnterInfo = false;
        bool bChangeNickname = false;
        if (enterInfo == "Enter") bEnterInfo = true;
        else if (enterInfo == "Change")
        {
            bEnterInfo = true;
            bChangeNickname = true;
        }
        else bEnterInfo = false;

        if (!bEnterInfo)
        {
            auto it = data.find(userID);
            if (it != data.end())
            {
                userNickname = it->second.nickname;
            }
        }
        UserInfo info = { userNickname, bEnterInfo };
        data[userID] = info;
        
        if(!bChangeNickname)
            qEnterInfo.push(make_pair(userID, bEnterInfo));
    }
}

vector<string> solution(vector<string> record) {
    vector<string> answer;

    unordered_map<string, UserInfo> data;
    queue<pair<string, bool>> qEnterInfo;
    makeInfo(record, data, qEnterInfo);
    
    while (!qEnterInfo.empty())
    {
        pair<string, bool> pairEnterInfo = qEnterInfo.front();
        if (pairEnterInfo.second)
        {
            string enterStr = data[pairEnterInfo.first].nickname + "님이 들어왔습니다.";
            answer.push_back(enterStr);
        }
        else
        {
            string enterStr = data[pairEnterInfo.first].nickname + "님이 나갔습니다.";
            answer.push_back(enterStr);
        }
        qEnterInfo.pop();
    }

    return answer;
}
