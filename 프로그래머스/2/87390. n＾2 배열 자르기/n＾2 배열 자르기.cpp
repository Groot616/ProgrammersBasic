#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    long long leftY = left / n + 1;
    long long leftX = left % n + 1;
    long long rightY = right / n + 1;
    long long rightX = right % n + 1;
    for(long long i = leftY; i <= rightY; ++i)
    {
        if(i == leftY && leftY != rightY)
        {
            for(long long j = leftX; j <= n; ++j)
                answer.push_back(max(i, j));
        }
        else if(i == rightY && leftY != rightY)
        {
            for(long long j = 1; j <= rightX; ++j)
                answer.push_back(max(i, j));
        }
        else if(leftY == rightY)
        {
            for(long long j = leftX; j <= rightX; ++j)
                answer.push_back(max(i, j));
        }
        else
        {
            for(long long j = 1; j <= n; ++j)
                answer.push_back(max(i, j));
        }
    }
    
    return answer;
}