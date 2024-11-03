#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

struct possible
{
    int x1, x2, y1, y2;
    
    possible(int a, int b, int c, int d) : x1(a), x2(b), y1(c), y2(d) {}
};

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = 0;
    
    bool bMin1 = false;
    // -1이 아닌 좌표 확인
    vector<pair<int, int>> coordi;
    for(int i = 0; i < park.size(); ++i)
    {
        for(int j = 0; j < park[i].size(); ++j)
        {
            if(park[i][j] == "-1")
            {
                bMin1 = true;
                coordi.emplace_back(i, j);
            }
        }
    }
    
    // -1가 아닌 좌표끼리 정사각형을 만들어 mats에 속하는 길이면 해당 정사각형의 좌표를 저장
    vector<possible> result;
    for(int i = 0; i < coordi.size() - 1; ++i)
    {
        for(int j = i + 1; j < coordi.size(); ++j)
        {
            int x = abs(coordi[j].first - coordi[i].first) + 1;
            int y = abs(coordi[j].second - coordi[i].second) + 1;
            for(int k = 0; k < mats.size(); ++k)
            {
                if(x == mats[k] && y == x)
                {
                    possible tmp(
                        min(coordi[i].first, coordi[j].first), max(coordi[i].first, coordi[j].first),
                        min(coordi[i].second, coordi[j].second), max(coordi[i].second, coordi[j].second));
                    result.push_back(tmp);
                }
            }
                
        }
    }
    
    // 좌표 내에 -1이 아닌 다른 문자열 존재시 이미 사용중인 자리이므로 제외, 나머지 자리중 가장 큰 수를 answer에 할당
    vector<int> realResult;
    for(int i = 0; i < result.size(); ++i)
    {
        bool bFull = false;
        for(int j = result[i].x1; j <= result[i].x2; ++j)
        {
            for(int k = result[i].y1; k <= result[i].y2; ++k)
            {
                if(park[j][k] != "-1")
                {
                    bFull = true;
                    break;
                }
            }
            if(bFull)
                break;
        }
        if(!bFull)
            realResult.push_back(result[i].x2 - result[i].x1 + 1);
    }
    // 사이즈가 1인 돗자리가 존재할 경우에 대해 1추가
    for(int i = 0; i < mats.size(); ++i)
    {
        if(mats[i] == 1 && bMin1)
            realResult.push_back(1);
    }
    
    if(realResult.size() == 0) answer = -1;
    else
        answer = *max_element(realResult.begin(), realResult.end());
    
    return answer;
}