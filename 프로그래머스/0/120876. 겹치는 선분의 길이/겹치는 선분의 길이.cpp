#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    
    int min = lines[0][0];
    int max = lines[0][0];
    for (int i = 0; i < lines.size(); ++i)
    {
        for (int j = 0; j < lines[0].size(); ++j)
        {
            if (lines[i][j] > max)
                max = lines[i][j];
            if (lines[i][j] < min)
                min = lines[i][j];
        }
    }
    for (int i = 0; i < lines.size(); ++i)
    {
        for (int j = 0; j < lines[0].size(); ++j)
        {
            if (min < 0)
                lines[i][j] += abs(min);
            else
                lines[i][j] -= min;
        }
    }

    vector<int> element;
    for (int i = 0; i < lines.size(); ++i)
    {
        for (int j = 0; j < lines[0].size(); ++j)
        {
            element.push_back(lines[i][j]);
        }
    }
    sort(element.begin(), element.end());
    max = *max_element(element.begin(), element.end());

    // 0 1 2 3 4 5 6 7 8 
    // 1 0 0 0 0 0 0 0 0
    // 1 0 1 1 1 0 0 0 0
    // 1 0 1 2 2 1 1 1 1
    // result 2
    vector<int>arr(max);
    for (int i = 0; i < 3; ++i)
    {
        for (int j = lines[i][0]; j < lines[i][1]; ++j)
        {
            arr[j] += 1;
        }
    }
    int cnt = 0;
    for (const auto& e : arr)
    {
        if (e >= 2)
            ++cnt;
    }
    answer = cnt;

    return answer;
}