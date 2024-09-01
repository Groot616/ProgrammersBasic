#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    
    // 문자열을 순회하면서 맵에 키 추가, 이 때 같은 key가 있다면 밸류 증가
    map<char, int> element;
    for(const auto& e : s)
    {
        element[e]++;
    }
    // value가 1인 키만 출력, 모든 밸류가 1이 아니라면 빈 문자열 리턴
    for(const auto& e : element)
    {
        if(e.second == 1)
            answer += e.first;
    }
    
    return answer;
}