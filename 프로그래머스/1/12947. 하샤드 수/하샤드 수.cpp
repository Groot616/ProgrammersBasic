#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    string numStr = to_string(x);
    vector<int> element;
    
    if(x <= 10)
        answer = true;
    else
    {
        for(int i=0; i<numStr.length(); ++i)
            element.push_back(numStr[i] - '0');
        int sum = 0;
        for(int i=0; i<element.size(); ++i)
            sum += element[i];
        if(x % sum == 0)
            answer = true;
        else
            answer = false;
    }
    
    return answer;
}