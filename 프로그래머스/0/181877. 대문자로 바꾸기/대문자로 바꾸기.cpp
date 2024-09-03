#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto& e : myString)
        e = toupper(e);
    answer = myString;
    
    return answer;
}