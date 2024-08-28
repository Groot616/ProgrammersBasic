#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string str = to_string(num);
    for(int i=0; i<str.length(); ++i)
    {
        if(str[i] - '0' == k)
        {
            answer = i + 1;
            break;
        }
        else
            answer = -1;
    }
    
    return answer;
}