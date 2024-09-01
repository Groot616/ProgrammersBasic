#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;

    vector<string> arr;
    int start = i;
    int end = j;
    for (int i = start; i <= end; ++i)
    {
        arr.push_back(to_string(i));
    }

    string comp = to_string(k);
    for (const auto& e : arr)
    {
        for (int i = 0; i < e.length(); ++i)
        {
            if (e[i] == comp[0])
                ++answer;
        }
    }

    return answer;
}