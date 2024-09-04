#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    
    vector<string> element;
    string tmp = "";
    for(const auto& e : myString)
    {
        if(e != 'x')
            tmp += e;
        else
        {
            if(!tmp.empty())
            {
                element.push_back(tmp);
                tmp = "";
            }
        }
    }
    if(!tmp.empty())
        element.push_back(tmp);
    sort(element.begin(), element.end());
    answer = element;
    
    return answer;
}