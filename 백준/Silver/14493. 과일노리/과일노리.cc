#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // 1. 각 구간별 확인봇 등장 간격 및 감시 간격
    // 2. 이동에 1초 소비
    // 3. 최소 시간 측정
    // 4. 각 구간의 현재 상태를 갱신하며 진행해야함
    // 추가 : 처음에는 무조건 감시 중이므로 대기

    int answer = 0;
    int n;
    int move = 1;
    vector<pair<int, int>> info;
    vector<int> totalInterval;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int interval, sec;
        cin >> interval >> sec;
        info.push_back(make_pair(interval, sec));
    }

    for (int i = 1; i < info.size(); ++i)
        totalInterval.push_back(info[i].first + info[i].second);

    for (int i = 0; i < info.size(); ++i)
    {
        if(i == 0)
            answer += info[i].second + move;
        else
        {
            if (answer % totalInterval[i - 1] >= info[i].second)
                answer += move;
            else
                answer += info[i].second - (answer % totalInterval[i - 1]) + move;
        }
    }
    cout << answer << '\n';

    return 0;
}