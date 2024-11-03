#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    const vector<pair<char, char>> indicator = {{'R', 'T'}, {'C', 'F'}, {'J', 'M'}, {'A', 'N'}};
    vector<char> result;
    map<char, int> eachScore;
    
    for(int i = 0; i < choices.size(); ++i)
    {
        if(choices[i] < 4) eachScore[survey[i][0]] += 4 - choices[i];
        else if(choices[i] > 4) eachScore[survey[i][1]] += choices[i] - 4;
        else
        {
            eachScore[survey[i][0]] += 0;
            eachScore[survey[i][1]] += 0;
        }
    }
    
    for(auto it = eachScore.begin(); it != eachScore.end(); ++it)
        cout << it->first << ", " << it->second << '\n';
    
    for(int i = 0; i < indicator.size(); ++i)
    {
        auto it1 = eachScore.find(indicator[i].first);
        auto it2 = eachScore.find(indicator[i].second);
        
        if(it1 != eachScore.end() && it2 == eachScore.end()) result.push_back(it1->first);
        else if(it1 == eachScore.end() && it2 != eachScore.end()) result.push_back(it2->first);
        else if(it1 != eachScore.end() && it2 != eachScore.end())
        {
            if(it1->second > it2->second) result.push_back(it1->first);
            else if(it1->second < it2->second) result.push_back(it2->first);
            else
            {
                if(it1->first < it2->first) result.push_back(it1->first);
                else result.push_back(it2->first);
            }
        }
        else if(it1 == eachScore.end() && it2 == eachScore.end())
            result.push_back(indicator[i].first);
    }
    
    for(int i = 0; i < result.size(); ++i)
        answer += result[i];
    
    return answer;
}