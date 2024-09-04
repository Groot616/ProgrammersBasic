#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;

    vector<int> tmp;
    int cnt = 0;
    while (true)
    {
        for (auto& e : arr)
        {
            if (e >= 50 && e % 2 == 0)
                tmp.push_back(e / 2);
            else if (e < 50 && e % 2 == 1)
                tmp.push_back(2 * e + 1);
            else
                tmp.push_back(e);
        }
        ++cnt;
        if (arr == tmp)
            break;
        else
        {
            arr = tmp;
            tmp.erase(tmp.begin(), tmp.end());
        }
    }
    answer = cnt - 1;

    return answer;
}