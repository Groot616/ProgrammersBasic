#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dp(const vector<vector<int>>& land, vector<vector<int>>& result)
{
    for (int i = 1; i < land.size(); ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            int maxNum = 0;
            for (int k = 0; k < 4; ++k)
            {
                if (k != j)
                    maxNum = max(maxNum, result[i - 1][k]);
            }
            result[i][j] = land[i][j] + maxNum;
        }
    }
}

int solution(vector<vector<int>> land)
{
    int answer = 0;

    vector<vector<int>> result(land.size(), vector<int>(4, 0));
    for (int i = 0; i < 4; ++i)
        result[0][i] = land[0][i];
    dp(land, result);
    answer = *max_element(result[result.size() - 1].begin(), result[result.size() - 1].end());

    return answer;
}