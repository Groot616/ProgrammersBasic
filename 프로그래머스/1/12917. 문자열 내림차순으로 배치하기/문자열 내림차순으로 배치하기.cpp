#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    string largeAlpha = "";
    string smallAlpha = "";
    for(int i=0; i<s.length(); ++i)
    {
        if(s[i] >= 65 && s[i] <= 90)
            largeAlpha += s[i];
        else
            smallAlpha += s[i];
    }
    sort(largeAlpha.rbegin(), largeAlpha.rend());
    sort(smallAlpha.rbegin(), smallAlpha.rend());
    answer += smallAlpha;
    answer += largeAlpha;
    
    return answer;
}