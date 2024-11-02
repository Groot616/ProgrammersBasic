#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    vector<pair<int, int>> coordi;
    for(int i = 0; i < wallpaper.size(); ++i)
    {
        for(int j = 0; j < wallpaper[i].size(); ++j)
        {
            if(wallpaper[i][j] == '#')
                coordi.push_back(make_pair(i, j));
        }
    }
    
    sort(coordi.begin(), coordi.end());
    int x1 = coordi[0].first;
    int x2 = coordi[coordi.size() - 1].first;
    sort(coordi.begin(), coordi.end(), compare);
    int y1 = coordi[0].second;
    int y2 = coordi[coordi.size() - 1].second;
    answer.push_back(x1);
    answer.push_back(y1);
    answer.push_back(x2 + 1);
    answer.push_back(y2 + 1);
    
    return answer;
}