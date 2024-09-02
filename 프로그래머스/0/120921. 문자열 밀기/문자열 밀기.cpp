#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    int answer = 0;

    // 큐를 생성하고 문자열을 집어넣음
    // 돌려가며 문자열 비교
    // 가능하다면 최소횟수 리턴, 불가능하면 -1 리턴

    if (A == B)
    {
        answer = 0;
        return answer;
    }
    
    // 큐에 역순(o먼저)으로 넣으면 h e l l o -> pop push 하면 o h e l l
    queue<char> str;
    for (int i = A.length() - 1; i >= 0; --i)
        str.push(A[i]);

    int length = A.length();
    int cnt = 0;
    // 길이만큼 회전시켜 동일한 문자열이 있는지 확인 및 cnt 증가
    for (int i = 0; i < length; ++i)
    {
        // 비교를 위해 큐의 문자 재조합
        string tmp = "";
        for (int j = 0; j < length; ++j)
        {
            tmp += str.front();
            char forpush;
            forpush = str.front();
            str.pop();
            str.push(forpush);
        }
        reverse(tmp.begin(), tmp.end());
        // 조합후 비교
        if (tmp != B)
            ++cnt;
        else
        {
            answer = cnt;
            break;
        }

        // 큐의 front를 뒤로 보내고 다시 비교
        char forpush;
        forpush = str.front();
        str.pop();
        str.push(forpush);
    }

    if (cnt == 0 || cnt == length)
        answer = -1;

    return answer;
}