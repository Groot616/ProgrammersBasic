#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Info
{
    int nums, index;

    Info(int nums, int index) : nums(nums), index(index) {}
};

int solution(vector<int> priorities, int location) {
    int answer = 0;

    queue<Info> q;
    for (int i = 0; i < priorities.size(); ++i)
        q.push({ priorities[i], i });

    sort(priorities.rbegin(), priorities.rend());
    int idx = 0;
    while (!q.empty())
    {
        int maxNum = priorities[idx];
        Info front = q.front();
        q.pop();
        if (front.nums < maxNum)
            q.push(front);
        else
        {
            ++answer;
            ++idx;
            if (front.index == location)
                break;
        }
    }

    return answer;
}