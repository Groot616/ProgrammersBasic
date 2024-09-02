#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;

    string tmp ="";
    for(const auto& e : my_string)
    {
        if(e>='0' && e <='9')
        {
            tmp += e;
        }
        else
        {
            if(tmp != "")
            {
                answer += stoi(tmp);
                tmp = "";
            }
        }
    }
    
    if(tmp.length())
    {
        answer += stoi(tmp);
    }

    return answer;
}