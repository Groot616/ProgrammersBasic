#include <string>
#include <vector>
#include <tuple>
#include <cmath>
#include <numeric>

using namespace std;

void getInfo(string &dartResult, vector<tuple<int, char, char>> &info)
{
    int idx = 0;
    int score = dartResult[idx] - '0';
    if(dartResult[idx + 1] >= '0' && dartResult[idx + 1] <= '9')
    {
        ++idx;
        score = 10 * score + dartResult[idx] - '0';
    }
    ++idx;
    char exponential = dartResult[idx];
    char option = '-';

    if(dartResult[idx + 1] == '*' || dartResult[idx + 1] == '#')
    {
        ++idx;
        option = dartResult[idx];
    }

    info.push_back(make_tuple(score, exponential, option));

    dartResult.erase(0, idx + 1);
}

int solution(string dartResult) {
    int answer = 0;
    
    vector<int> score;
    vector<tuple<int, char, char>> info;
    while(true)
    {
        if(dartResult.length() == 0)
            break;
        
        getInfo(dartResult ,info);
    }
    
    for(int i = 0; i < info.size(); ++i)
    {
        if(get<1>(info[i]) == 'S')
            score.push_back((int)pow(get<0>(info[i]), 1));
        else if(get<1>(info[i]) == 'D')
            score.push_back((int)pow(get<0>(info[i]), 2));
        else if(get<1>(info[i]) == 'T')
            score.push_back((int)pow(get<0>(info[i]), 3));
    }
    
    for(int i = 0; i < info.size(); ++i)
    {
        if(get<2>(info[i]) == '*')
        {
            if(i == 0)
                score[i] *= 2;
            else
            {
                score[i - 1] *= 2;
                score[i] *= 2;
            }
        }
        else if(get<2>(info[i]) == '#')
            score[i] *= -1;
    }
    answer = accumulate(score.begin(), score.end(), 0);
    
    return answer;
}