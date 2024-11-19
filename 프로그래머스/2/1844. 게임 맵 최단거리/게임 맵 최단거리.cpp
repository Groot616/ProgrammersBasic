#include<vector>
#include<queue>
using namespace std;

const vector<int> dx = {0, 0, 1, -1};
const vector<int> dy = {1, -1, 0, 0};

struct Coordi
{
    int y, x;
    Coordi(int y, int x) : y(y), x(x) {}
    
    bool bIsValid(const int& width, const int& height)
    {
        return x >= 0 && x < width && y >= 0 && y < height;
    }
};

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    
    int sizeY = maps.size();
    int sizeX = maps[0].size();
    vector<vector<bool>> visited(sizeY, vector<bool>(sizeX, false));
    queue<Coordi> q;
    
    q.push({0, 0});
    visited[0][0] = true;
    while(!q.empty())
    {
        Coordi current = q.front();
        q.pop();
        
        for(int i = 0; i < 4; ++i)
        {
            Coordi next = {current.y + dy[i], current.x + dx[i]};
            if(next.bIsValid(sizeX, sizeY) && !visited[next.y][next.x] && maps[next.y][next.x] != 0)
            {
                q.push(next);
                visited[next.y][next.x] = true;
                maps[next.y][next.x] = maps[current.y][current.x] + 1;
            }
        }
    }
    if(!visited[sizeY -1][sizeX - 1])
        answer = -1;
    else
        answer = maps[sizeY - 1][sizeX - 1];
    
    return answer;
}