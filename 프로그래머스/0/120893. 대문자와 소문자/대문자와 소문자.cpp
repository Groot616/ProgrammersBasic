#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i=0; i<my_string.length(); ++i)
    {
        if(my_string[i] >= 65 && my_string[i] <= 90)
            answer += my_string[i] + 32;
        else
            answer += my_string[i] - 32;
    }
    
    return answer;
}