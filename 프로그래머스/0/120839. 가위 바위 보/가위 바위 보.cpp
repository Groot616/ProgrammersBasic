#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    // 2 ok 0, 0 ok 5, 5 ok 2
    for(int i=0; i<rsp.length(); i++)
    {
        switch(rsp[i])
        {
            case '2':
                answer += to_string(0);
                break;
            case '0':
                answer += to_string(5);
                break;
            case '5':
                answer += to_string(2);
                break;
            default:
                break;
        }
    }
    
    return answer;
}