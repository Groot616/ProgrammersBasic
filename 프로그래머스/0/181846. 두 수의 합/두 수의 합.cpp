#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string a, string b) {
    string answer = "";
    
    string zero = "";
    int diff = a.length() - b.length();
    if(diff < 0)
        diff *= -1;
    for(int i=0; i<diff; ++i)
        zero += '0';
    if(a.length() < b.length())
        a = zero + a;
    else if(a.length() > b.length())
        b = zero + b;
    
    int sum = 0;
    int up = 0;
    int down = 0;
    for(int i=a.length() - 1; i>=0; --i)
    {
        sum = (a[i] - '0') + (b[i] - '0') + up;
        up = sum / 10;
        down = sum % 10;
        answer.push_back(down + '0');
    }
    if(up)
        answer.push_back(up + '0');
    reverse(answer.begin(), answer.end());
    
    return answer;
}