#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    int firstCnt = 0;
    int otherCnt = 0;
    
    string eraseStr = "";
    eraseStr += s[0];
    s.erase(0, 1);
    ++firstCnt;

    while (true)
    {
        if (s[0] == eraseStr[0])
        {
            eraseStr += s.substr(0, 1);
            s.erase(0, 1);
            ++firstCnt;
        }
        else
        {
            eraseStr += s.substr(0, 1);
            s.erase(0, 1);
            ++otherCnt;
        }

        if (firstCnt == otherCnt)
        {
            ++answer;
            if(s.length() != 0)
            {
                firstCnt = 1;
                otherCnt = 0;
                eraseStr = s[0];
                s.erase(0, 1);
            }
            else
                break;
        }
    }

    return answer;
}