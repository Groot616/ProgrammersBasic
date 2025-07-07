#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int eraseZero(string& str, int& length)
{
    int retVal = 0;
    for(int i = 0; i < str.length(); ++i)
    {
        if(str[i] == '0')
            ++retVal;
    }
    length -= retVal;
    
    return retVal;
}

void lengthToBinary(string& str, int length)
{
    string s = "";
    while(length != 0)
    {
        s += to_string(length % 2);
        length /= 2;
    }
    reverse(s.begin(), s.end());
    str = s;
}

vector<int> solution(string s) {
    vector<int> answer;
    
    int cnt = 0;
    int zeroCnt = 0;
    int length = s.length();
    
    while(length != 1)
    {
        zeroCnt += eraseZero(s, length);
        lengthToBinary(s, length);
        length = s.length();
        ++cnt;
    }
    answer.push_back(cnt);
    answer.push_back(zeroCnt);
    
    return answer;
}