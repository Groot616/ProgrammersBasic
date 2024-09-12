#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string start;
    string end;

    vector<int> startTime;
    vector<int> endTime;
    vector<int> answer(3);

    cin >> start;
    cin >> end;

    stringstream ss(start);
    string word;
    while (getline(ss, word, ':'))
    {
        startTime.push_back(stoi(word));
    }
    stringstream sss(end);
    while (getline(sss, word, ':'))
    {
       endTime.push_back(stoi(word));
    }

    int cnt = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (endTime[i] == startTime[i])
            ++cnt;
    }
    if (cnt == 3)
    {
        cout << "24:00:00" << "\n";
        return 0;
    }

    if (endTime[2] < startTime[2])
    {
        endTime[1] -= 1;
        answer[2] = 60 + endTime[2] - startTime[2];
    }
    else
        answer[2] = endTime[2] - startTime[2];

    if (endTime[1] < startTime[1])
    {
        endTime[0] -= 1;
        answer[1] = 60 + endTime[1] - startTime[1];
    }
    else
        answer[1] = endTime[1] - startTime[1];

    if (endTime[0] < startTime[0])
    {
        endTime[0] += 24;
        answer[0] = endTime[0] - startTime[0];
    }
    else
        answer[0] = endTime[0] - startTime[0];
    
    cout.width(2);
    cout.fill('0');
    cout << answer[0] << ":";
    cout.width(2);
    cout << answer[1] << ":";
    cout.width(2);
    cout << answer[2] << "\n";

    return 0;
}