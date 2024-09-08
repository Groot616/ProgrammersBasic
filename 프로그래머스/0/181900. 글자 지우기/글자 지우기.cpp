#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    sort(indices.begin(), indices.end());
    // 0 1 3 6 10 11 15 16
    // indices의 요소번호 인덱스의 경우 출력x
    
    int cnt = 0;
    int idx = 0;
    while(cnt < my_string.length())
    {
        if(cnt != indices[idx])
            answer += my_string[cnt++];
        else
        {
            ++idx;
            ++cnt;
        }
    }
    
    return answer;
}