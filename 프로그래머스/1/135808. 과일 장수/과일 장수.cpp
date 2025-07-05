#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.rbegin(), score.rend());
    for(int i = 0; i < score.size() / m; ++i)
    {
        if(score[i * m] == score[(i * m) + (m - 1)])
            answer += score[i * m] * m;
        else
            answer += score[i * m + m - 1] * m;
    }
    
    return answer;
}