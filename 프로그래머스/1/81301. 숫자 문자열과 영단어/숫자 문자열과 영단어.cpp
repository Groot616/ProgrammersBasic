#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

const map<string, string> numAlpha = {
    {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"},
    {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}
};

int solution(string s) {
    int answer = 0;
    
    for(auto it = numAlpha.begin(); it != numAlpha.end(); ++it)
    {
        while(s.find(it->first) != string::npos)
        {
            auto pos = s.find(it->first);
            s.replace(pos, it->first.length(), it->second);
        }
    }
    answer = stoi(s);
    cout << answer << '\n';
    
    return answer;
}