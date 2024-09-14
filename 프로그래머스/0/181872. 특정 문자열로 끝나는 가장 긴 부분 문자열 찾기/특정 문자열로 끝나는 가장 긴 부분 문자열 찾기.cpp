#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    
    // GFEdCbA
    // Ed
    reverse(myString.begin(), myString.end());
    reverse(pat.begin(), pat.end());
    
    string tmp = "";
    if(myString.find(pat) != string::npos)
    {
        tmp = myString.substr(myString.find(pat)); 
    }
    reverse(tmp.begin(), tmp.end());
    answer = tmp;
    
    return answer;
}