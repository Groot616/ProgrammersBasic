#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    
    // 규칙1 4의 배수로 우상좌하 방식으로 이동
    // 규칙2 4의 배수로 시작지점이 0, 1, 2순으로 증가
    
    int checkNext = 0;
    int cnt = 1;
    for(int k=0; k<2*n-1; ++k)
    {
        checkNext = k / 4;
        if(k % 4 == 0)
        {
            for(int i=checkNext; i<n - checkNext; ++i)
            {
                answer[checkNext][i] = cnt;
                ++cnt;
            }
        }
        if(k % 4 == 1)
        {
            for(int i=checkNext + 1; i<n - checkNext; ++i)
            {
                answer[i][n - checkNext - 1] = cnt;
                ++cnt;
            }
        }
        if(k % 4 == 2)
        {
            // checkNext = 0, n = 5, k % 4 = 2, 3~0
            for(int i=n - checkNext - 2; i>=checkNext; --i)
            {
                answer[n-1-checkNext][i] = cnt;
                ++cnt;
            }
        }
        if(k % 4 == 3)
        {
            for(int i=n - 2 - checkNext; i>=checkNext + 1; --i)
            {
                answer[i][checkNext] = cnt;
                ++cnt;
            }
        }
    }
    
    return answer;
}