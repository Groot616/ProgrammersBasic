#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    for(int i=0; i<s.length(); ++i)
        s[i] = tolower(s[i]);
    
    int cntP = 0;
    int cntY = 0;
    for(int i=0; i<s.length(); ++i)
    {
        if(s[i] == 'p')
            ++cntP;
        else if(s[i] == 'y')
            ++cntY;
    }
    
    if(cntP == 0 && cntY == 0)
        answer = true;
    else if(cntP == cntY)
        answer = true;
    else
        answer = false;
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}