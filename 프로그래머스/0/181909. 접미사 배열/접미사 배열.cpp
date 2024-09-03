#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    for(int i=0; i<my_string.length(); ++i)
    {
        string tmp = "";
        for(int j=i; j<my_string.length(); ++j)
        {
            tmp += my_string[j];
        }
        answer.push_back(tmp);
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}