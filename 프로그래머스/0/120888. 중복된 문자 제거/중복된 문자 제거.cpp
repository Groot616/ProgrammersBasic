#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(const auto& e : my_string)
        if(answer.find(e)==string::npos)
            answer += e;
        
    return answer;
}