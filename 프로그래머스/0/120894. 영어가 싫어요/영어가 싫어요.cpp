#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    string tmp = "";
    vector<string> element;
    for(const auto& e : numbers)
    {
        tmp += e;
        if(tmp == "zero" || tmp == "one" || tmp == "two" || tmp == "three"  || tmp == "four"  || tmp == "five"  || tmp == "six"  || tmp == "seven"  || tmp == "eight"  || tmp == "nine")
        {
            element.push_back(tmp);
            tmp = "";
        }
    }
    string num = "";
    for(const auto& e : element)
    {
        if(e == "zero")
            num += "0";
        else if(e == "one")
            num += "1";
        else if(e == "two")
            num += "2";
        else if(e == "three")
            num += "3";
        else if(e == "four")
            num += "4";
        else if(e == "five")
            num += "5";
        else if(e == "six")
            num += "6";
        else if(e == "seven")
            num += "7";
        else if(e == "eight")
            num += "8";
        else
            num += "9";
    }
    
    answer = atoll(num.c_str());
    
    return answer;
}