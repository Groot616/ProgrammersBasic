#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto& e : myString)
    {
        if(e == 'a' || e == 'A')
            e = toupper(e);
        else
            e = tolower(e);
    }
    answer = myString;
    
    return answer;
}