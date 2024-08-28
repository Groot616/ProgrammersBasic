#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string str = to_string(age);
    // '0' == 48, 'a' = 97
    for(int i=0; i<str.length(); ++i)
    {
        answer += str[i] + 49;
    }
    
    return answer;
}