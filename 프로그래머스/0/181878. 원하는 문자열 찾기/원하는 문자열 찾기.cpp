#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(auto& e : myString)
        e = tolower(e);
    for(auto& e : pat)
        e = tolower(e);
    
    if(myString.find(pat) != string::npos)
        answer = 1;
    else
        answer = 0;
    
    return answer;
}