#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string before, string after) {
    int answer = 0;

    // map을 통해 before에 있는 알파뱃과 갯수 할당
    // map을 통해 after에 있는 알파뱃과 갯수 할당
    map<char, int> beforeAlpha;
    map<char, int> afterAlpha;
    for (const auto& e : before)
        beforeAlpha[e]++;
    for (const auto& e : after)
        afterAlpha[e]++;

    int cnt = 0;
    if(beforeAlpha == afterAlpha)
        answer = 1;
    else
        answer = 0;
    // 비교하여 동일시 만들 수 있으므로 1, 그렇지 않으면 0

    return answer;
}