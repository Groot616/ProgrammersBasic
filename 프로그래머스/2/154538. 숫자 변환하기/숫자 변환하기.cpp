#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int dp(const int& x, const int& y, const int& n, vector<int>& totalCnt, int addNum)
{
    for(int i = x; i <= y; ++i)
    {
        if(totalCnt[i] == -1) continue;
        if(i + n <= y && (totalCnt[i + n] == -1 || totalCnt[i + n] > totalCnt[i] + 1))
            totalCnt[i + n] = totalCnt[i] + 1;
        if(2 * i <= y && (totalCnt[2 * i] == -1 || totalCnt[2 * i] > totalCnt[i] + 1))
            totalCnt[2 * i] = totalCnt[i] + 1;
        if(3 * i <= y && (totalCnt[3 * i] == -1 || totalCnt[3 * i] > totalCnt[i] + 1))
            totalCnt[3 * i] = totalCnt[i] + 1;
    }
    
    return totalCnt[y];

    return addNum;
}

int solution(int x, int y, int n) {
    int answer = 0;

    vector<int> totalCnt(y + 2, -1);
    totalCnt[x] = 0;
    dp(x, y, n, totalCnt, 0);
    answer = totalCnt[y];
    
    return answer;
}