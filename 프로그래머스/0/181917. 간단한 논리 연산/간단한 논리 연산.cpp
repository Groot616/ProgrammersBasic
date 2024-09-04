#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    
    bool tmp1;
    bool tmp2;
    
    if(x1 == false && x2 == false)
        tmp1 = false;
    else
        tmp1 = true;
    
    if(x3 == false && x4 == false)
        tmp2 = false;
    else
        tmp2 = true;

    if(tmp1 == true && tmp2 == true)
        answer = true;
    else
        answer = false;
    
    return answer;
}