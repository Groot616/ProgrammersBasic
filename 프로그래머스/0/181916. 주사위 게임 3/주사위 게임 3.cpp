#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    // 벡터 이용해 각 숫자와 개수 확인, ex) 2 2개 1 1개 3 1개
    // element.first의 개수를 파악해서 수식을 정하고, 조건이 겹칠 경우 second를 통해 계산
    
    vector<int> dice;
    dice.push_back(a);
    dice.push_back(b);
    dice.push_back(c);
    dice.push_back(d);
    
    map<int, int> diceCnt;
    for(int i=0; i<dice.size(); ++i)
    {
        diceCnt[dice[i]]++;
    }
    
    /** 디버깅용 */
    for(const auto& e : diceCnt)
        cout << e.first << ", " << e.second << endl;
    /** 디버깅용 */
    
    if(diceCnt.size() == 1)
    {
        auto it = diceCnt.begin();
        answer = 1111 * it->first;
        return answer;
    }
    else if(diceCnt.size() == 2)
    {
        vector<vector<int>> cnt(2, vector<int>(2));
        int i = 0;
        for(auto it = diceCnt.begin(); it != diceCnt.end(); ++it)
        {
            cnt[i][0] = it->first;
            cnt[i][1] = it->second;
            ++i;
        }
        if(cnt[0][1] == 3)
        {
            answer = pow((10 * cnt[0][0] + cnt[1][0]), 2);
            return answer;
        }
        else if(cnt[0][1] == 2)
        {
            answer = (cnt[0][0] + cnt[1][0]) * abs(cnt[0][0] - cnt[1][0]);
            return answer;
        }
        else
        {
            answer = pow((10 * cnt[1][0] + cnt[0][0]), 2);
            return answer;
        }
    }
    else if(diceCnt.size() == 3)
    {
        vector<vector<int>> cnt(3, vector<int>(2));
        int i = 0;
        for(auto it = diceCnt.begin(); it != diceCnt.end(); ++it)
        {
            cnt[i][0] = it->first;
            cnt[i][1] = it->second;
            ++i;
        }
        if(cnt[0][1] == 2)
        {
            answer = cnt[1][0] * cnt[2][0];
            return answer;
        }
        else if(cnt[1][1] == 2)
        {
            answer = cnt[0][0] * cnt[2][0];
            return answer;
        }
        else
        {
            answer = cnt[0][0] * cnt[1][0];
        }
    }
    else
    {
        int min = 99;
        for(int i=0; i<4; ++i)
            if(dice[i] < min)
                min = dice[i];
        answer = min;
        return answer;
    }
    
    
    return answer;
}