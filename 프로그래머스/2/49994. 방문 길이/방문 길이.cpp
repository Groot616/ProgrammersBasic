#include <string>
#include <queue>
#include <unordered_map>
#include <string>

using namespace std;

struct Coordi
{
    int y, x;

    Coordi(int y, int x) : y(y), x(x) {}

    bool bIsValid(const int& width, const int& height)
    {
        return x >= 0 && x <= width && y >= 0 && y <= height;
    }

    bool bIsEnd(const int& width, const int& height)
    {
        return x == 0 || x == width || y == 0 || y == height;
    }
};

void makeOrder(queue<char>& order, const string& dirs)
{
    for (const auto e : dirs)
        order.push(e);
}

int solution(string dirs) {
    int answer = 0;

    queue<char> order;
    makeOrder(order, dirs);

    unordered_map<string, int> visited;
    Coordi current = { 5, 5 };
    while (!order.empty())
    {
        char nowOrder = order.front();
        order.pop();
        if (nowOrder == 'U')
        {
            Coordi next = { current.y + 1, current.x };
            string checkStr1 = to_string(current.y) + to_string(current.x) + "to" + to_string(next.y) + to_string(next.x);
            string checkStr2 = to_string(next.y) + to_string(next.x) + "to" + to_string(current.y) + to_string(current.x);
            if (next.bIsValid(10, 10) && visited.find(checkStr1) == visited.end() && visited.find(checkStr2) == visited.end())
            {
                ++answer;
                visited[checkStr1]++;
                visited[checkStr2]++;
                current = next;
            }
            else if (next.bIsValid(10, 10))
                current = next;
        }
        else if (nowOrder == 'D')
        {
            Coordi next = { current.y - 1, current.x };
            string checkStr1 = to_string(current.y) + to_string(current.x) + "to" + to_string(next.y) + to_string(next.x);
            string checkStr2 = to_string(next.y) + to_string(next.x) + "to" + to_string(current.y) + to_string(current.x);
            if (next.bIsValid(10, 10) && visited.find(checkStr1) == visited.end() && visited.find(checkStr2) == visited.end())
            {
                ++answer;
                visited[checkStr1]++;
                visited[checkStr2]++;
                current = next;
            }
            else if (next.bIsValid(10, 10))
                current = next;
        }
        else if (nowOrder == 'L')
        {
            Coordi next = { current.y, current.x - 1 };
            string checkStr1 = to_string(current.y) + to_string(current.x) + "to" + to_string(next.y) + to_string(next.x);
            string checkStr2 = to_string(next.y) + to_string(next.x) + "to" + to_string(current.y) + to_string(current.x);
            if (next.bIsValid(10, 10) && visited.find(checkStr1) == visited.end() && visited.find(checkStr2) == visited.end())
            {
                ++answer;
                visited[checkStr1]++;
                visited[checkStr2]++;
                current = next;
            }
            else if (next.bIsValid(10, 10))
                current = next;
        }
        else if (nowOrder == 'R')
        {
            Coordi next = { current.y, current.x + 1 };
            string checkStr1 = to_string(current.y) + to_string(current.x) + "to" + to_string(next.y) + to_string(next.x);
            string checkStr2 = to_string(next.y) + to_string(next.x) + "to" + to_string(current.y) + to_string(current.x);
            if (next.bIsValid(10, 10) && visited.find(checkStr1) == visited.end() && visited.find(checkStr2) == visited.end())
            {
                ++answer;
                visited[checkStr1]++;
                visited[checkStr2]++;
                current = next;
            }
            else if (next.bIsValid(10, 10))
                current = next;
        }
    }
    return answer;
}