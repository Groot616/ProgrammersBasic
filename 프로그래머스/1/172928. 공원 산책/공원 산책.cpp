#include <string>
#include <sstream>
#include <vector>

using namespace std;

void findStart(const vector<string> park, int& x, int& y)
{
    for(int i = 0; i < park.size(); ++i)
    {
        for(int j = 0; j < park[i].size(); ++j)
        {
            if(park[i][j] == 'S')
            {
                x = j;
                y = i;
            }
        }
    }
}

void getCoordi(const vector<string> routes, vector<pair<char, int>> &coordi)
{
     for(int i = 0; i < routes.size(); ++i)
    {
        stringstream ss(routes[i]);
        char moveTo;
        int length;
        ss >> moveTo >> length;
        coordi.push_back(make_pair(moveTo, length));
     }
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    int x, y;
    findStart(park, x, y);

    vector<pair<char, int>> coordi;
    getCoordi(routes, coordi);
    
    for(int i = 0; i < coordi.size(); ++i)
    {
        bool bCanMove = true;
        switch(coordi[i].first)
        {
            case 'E':
                for(int j = x; j <= x + coordi[i].second; ++j)
                {
                    if(j >= park[0].size() || park[y][j] == 'X')
                    {
                        bCanMove = false;
                        break;
                    }
                    else
                        bCanMove = true;
                }
                if(bCanMove)
                    x += coordi[i].second;
                break;
            case 'W':
                for(int j = x; j >= x - coordi[i].second; --j)
                {
                    if(j < 0 || park[y][j] == 'X')
                    {
                        bCanMove = false;
                        break;
                    }
                    else
                        bCanMove = true;
                }
                if(bCanMove)
                    x -= coordi[i].second;
                break;
            case 'N':
                for(int j = y; j >= y - coordi[i].second; --j)
                {
                    if(j < 0 || park[j][x] == 'X')
                    {
                        bCanMove = false;
                        break;
                    }
                    else
                        bCanMove = true;
                }
                if(bCanMove)
                    y -= coordi[i].second;
                break;
            case 'S':
                for(int j = y; j <= y + coordi[i].second; ++j)
                {
                    if(j >= park.size() || park[j][x] == 'X')
                    {
                        bCanMove = false;
                        break;
                    }
                    else
                        bCanMove = true;
                }
                if(bCanMove)
                    y += coordi[i].second;
                break;
            default:
                break;
        }
    }
    answer.push_back(y);
    answer.push_back(x);
    
    return answer;
}