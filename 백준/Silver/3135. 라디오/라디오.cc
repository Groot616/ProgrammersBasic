#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer = 0;
    int now, object;
    int n;
    vector<int> favorite;

    cin >> now >> object;
    cin >> n;
    favorite.resize(n);
    for (auto& x : favorite) cin >> x;

    // 목표 주파수가 즐겨찾기 주파수와 같을 경우
    for (int i = 0; i < favorite.size(); ++i)
    {
        if (favorite[i] == object)
        {
            ++answer;
            cout << answer << '\n';
            return 0;
        }
    }

    int diff = 9999;
    int nowPos = 0;
    // 즐겨찾기 주파수가 하나만 있을 경우
    if (favorite.size() == 1)
    {
        if (abs(favorite[0] - object) < abs(now - object))
        {
            ++answer;
            answer += abs(object - favorite[0]);
        }
        // 위에서 같을 경우에 대한 코드가 있으므로 그냥 else 바로 사용
        else
            answer += abs(now - object);
    }
    else
    {
        for (int i = 0; i < favorite.size(); ++i)
        {
            if (abs(favorite[i] - object) < diff && abs(favorite[i] - object) < abs(now - object))
            {
                diff = abs(favorite[i] - object);
                nowPos = favorite[i];
            }
        }
        if (diff != 9999)
        {
            ++answer;
            answer += abs(object - nowPos);
        }
        else
            answer = abs(now - object);
    }
    cout << answer << '\n';

    return 0;
}