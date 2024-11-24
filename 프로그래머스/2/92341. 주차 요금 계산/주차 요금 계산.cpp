#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <cmath>

using namespace std;

struct Info
{
    string car;
    string time;
    bool bIsOut;

    Info(string car, string time, bool bIsOut) : car(car), time(time), bIsOut(bIsOut) {}
};

void divideRecords(const vector<string>& records, unordered_map<string, vector<Info>>& totalInfo, priority_queue<string, vector<string>, greater<string>>& carTurn, unordered_map<string, int>& carCache)
{
    unordered_set<string> alreadyInputQueue;
    for (int i = 0; i < records.size(); ++i)
    {
        stringstream ss(records[i]);
        string time, carNum, outInfo;
        ss >> time >> carNum >> outInfo;
        bool bIsOutInfo;
        if (outInfo == "IN")
            bIsOutInfo = false;
        else
            bIsOutInfo = true;
        Info newInfo = { carNum, time, bIsOutInfo };
        totalInfo[carNum].push_back(newInfo);
        if (alreadyInputQueue.find(carNum) == alreadyInputQueue.end())
        {
            carTurn.push(carNum);
            carCache[carNum] = 0;
            alreadyInputQueue.insert(carNum);
        }
    }
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;

    priority_queue<string, vector<string>, greater<string>> carTurn;
    unordered_map<string, vector<Info>> totalInfo;
    unordered_map<string, int> carCache;
    divideRecords(records, totalInfo, carTurn, carCache);

    for (auto it = totalInfo.begin(); it != totalInfo.end(); ++it)
    {
        if (it->second.size() % 2 == 0)
        {
            int min = 0;
            string carNum = "";
            for (int i = 0; i < it->second.size(); ++i)
            {
                carNum = it->second[i].car;
                stringstream ss(it->second[i].time);
                string word = "";
                vector<int> timeVec;
                while (getline(ss, word, ':'))
                    timeVec.push_back(stoi(word));
                if (!it->second[i].bIsOut)
                    min -= (60 * timeVec[0] + timeVec[1]);
                else
                    min += (60 * timeVec[0] + timeVec[1]);
            }
            if (min <= fees[0])
                carCache[carNum] = fees[1];
            else
            {
                int money = fees[1] + fees[3] * ceil((double)(min - fees[0]) / (double)fees[2]);
                carCache[carNum] = money;
            }
        }
        else
        {
            int min = 0;
            string carNum = "";
            for (int i = 0; i < it->second.size(); ++i)
            {
                
                carNum = it->second[i].car;
                stringstream ss(it->second[i].time);
                string word = "";
                vector<int> timeVec;
                while (getline(ss, word, ':'))
                    timeVec.push_back(stoi(word));
                if (!it->second[i].bIsOut && i != it->second.size() - 1)
                    min -= (60 * timeVec[0] + timeVec[1]);
                else if (it->second[i].bIsOut && i != it->second.size() - 1)
                    min += (60 * timeVec[0] + timeVec[1]);
                else if (!it->second[i].bIsOut && i == it->second.size() - 1)
                    min += (23 * 60 + 59 - (60 * timeVec[0] + timeVec[1]));
            }
            if (min <= fees[0])
                carCache[carNum] = fees[1];
            else
            {
                int money = fees[1] + fees[3] * ceil((double)(min - fees[0]) / (double)fees[2]);
                carCache[carNum] = money;
            }
        }
    }
    while (!carTurn.empty())
    {
        answer.push_back(carCache[carTurn.top()]);
        carTurn.pop();
    }

    return answer;
}