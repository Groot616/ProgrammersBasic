#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    int size = emergency.size();
    vector<int> answer(size);
    int cnt = 1;

    while (cnt <= size)
    {
        int max = *max_element(emergency.begin(), emergency.end());
        for (int i = 0; i < size; ++i)
        {
            if (emergency[i] == max)
            {
                answer[i] = cnt;
                emergency[i] = 0;
                ++cnt;
            }
        }
    }

    return answer;
}