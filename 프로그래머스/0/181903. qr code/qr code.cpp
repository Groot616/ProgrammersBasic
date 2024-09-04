#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    
    string tmp = "";
    for(int i=0; i<code.length(); ++i)
    {
        if(i % q == r)
            tmp += code[i];
    }
    answer = tmp;
    
    return answer;
}