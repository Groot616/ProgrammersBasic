#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(auto& e : myString)
    {
        if(e == 'A') e = 'B';
        else if(e == 'B') e = 'A';
    }
    myString.find(pat) == string::npos ? answer = 0 : answer = 1;
    
    return answer;
}