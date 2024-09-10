#include <iostream>
#include <string>
#include <vector>

using namespace std;
int solution(int n)
{
    int answer = 0;

    vector<char> element;
    string numStr;
    
    numStr = to_string(n);
    for(int i=0; i<numStr.length(); ++i)
    {
        element.push_back(numStr[i]);
    }
    
    for(int i=0; i<element.size(); ++i)
    {
        answer += element[i] - '0';
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}