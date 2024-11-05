#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

void makeInfo(unordered_map<string, unordered_map<string, int>>& info, unordered_map<string, int>& giftRate, const vector<string> gifts)
{
    for (int i = 0; i < gifts.size(); ++i)
    {
        stringstream ss(gifts[i]);
        string who, give;
        ss >> who >> give;

        info[who][give]++;
        giftRate[who]++;
        giftRate[give]--;
    }
}

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;

    unordered_map<string, unordered_map<string, int>> info;
    unordered_map<string, int> giftRate;
    makeInfo(info, giftRate, gifts);

    unordered_map<string, int> result;
    unordered_set<string> checkPairs;
    // info에서 누가 줬는지 루프
    for (const auto& who : info)
    {
        for (const auto give : friends)
        {
            // 이름이 다른 경우에만 선물을 준 것이므로 미리 조건을 통해 제거
            if (who.first == give || checkPairs.count(who.first + "-" + give) || checkPairs.count(give + "-" + who.first))
                continue;

            int givePresent = (info.find(who.first) != info.end() && info[who.first].count(give) > 0) ? info[who.first].at(give) : 0;
            int getPresent = (info.count(give) && info[give].count(who.first)) ? info[give].at(who.first) : 0;

            // 주지 않았다면 선물을 받아야 하므로 증가
            if (givePresent > getPresent)
                result[who.first]++;
            else if (givePresent < getPresent)
                result[give]++;
            // 서로 주고 받은 선물의 수가 같다면 선물지수 비교
            else
            {
                if (giftRate[who.first] > giftRate[give])
                    result[who.first]++;
                else if (giftRate[who.first] < giftRate[give])
                    result[give]++;
            }
            checkPairs.insert(who.first + "-" + give);
        }
    }

    int max = 0;
    for (const auto e : result)
    {
        if (e.second > max)
            max = e.second;
    }
    answer = max;

    return answer;
}