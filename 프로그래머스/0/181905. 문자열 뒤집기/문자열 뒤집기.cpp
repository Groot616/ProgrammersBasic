#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    
    
    for(int i=0; i<s; ++i)
        answer += my_string[i];
    
    vector<char> tmp;
    for(int i=s; i<=e; ++i)
    {
        tmp.push_back(my_string[i]);
    }
    reverse(tmp.begin(), tmp.end());
    for(const auto& e : tmp)
        answer += e;
    
    for(int i=e+1; i<my_string.length(); ++i)
        answer += my_string[i];
    
    return answer;
}