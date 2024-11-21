#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    
    sort(dungeons.begin(), dungeons.end());
    while(next_permutation(dungeons.begin(), dungeons.end()))
    {
        int copyK = k;
        int cnt = 0;
        for(int i = 0; i < dungeons.size(); ++i)
        {
            if(dungeons[i][0] <= copyK)
            {
                copyK -= dungeons[i][1];
                ++cnt;
            }
        }
        if(cnt > answer)
            answer = cnt;
    }
    
    return answer;
}