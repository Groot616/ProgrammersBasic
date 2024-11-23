#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

void makeLow(vector<string>& cities)
{
    for(int i = 0; i < cities.size(); ++i)
    {
        for(int j = 0; j < cities[i].length(); ++j)
            cities[i][j] = tolower(cities[i][j]);
    }
}

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    
    if(cacheSize == 0)
    {
        answer = 5 * cities.size();
        return answer;
    }
    
    makeLow(cities);
    
    deque<string> cache;
    int nextStart = 0;
    for(int i = 0; i < cities.size(); ++i)
    {
        if(cache.empty())
        {
            cache.push_back(cities[i]);
            answer += 5;
        }
        else
        {
            auto it = find(cache.begin(), cache.end(), cities[i]);
            if(it == cache.end())
            {
                cache.push_back(cities[i]);
                answer += 5;
            }
            else
            {
                cache.erase(it);
                cache.push_back(cities[i]);
                answer += 1;
            }
        }
        if(cache.size() == cacheSize)
        {
            nextStart = i + 1;
            break;
        }
    }
    
    for(int i = nextStart; i < cities.size(); ++i)
    {
        auto it = find(cache.begin(), cache.end(), cities[i]);
        if(it == cache.end())
        {
            cache.pop_front();
            cache.push_back(cities[i]);
            answer += 5;
        }
        else
        {
            cache.erase(it);
            cache.push_back(cities[i]);
            answer += 1;
        }
    }
    
    return answer;
}