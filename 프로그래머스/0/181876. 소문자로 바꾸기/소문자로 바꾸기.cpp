#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto& e : myString)
        e = tolower(e);
    answer = myString;
    
    return answer;
}