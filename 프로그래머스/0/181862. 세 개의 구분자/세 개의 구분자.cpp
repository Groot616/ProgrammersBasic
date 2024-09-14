#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    for(int i=0; i<myStr.length(); ++i)
    {
        if(myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c')
        {
            myStr[i] = ' ';
        }
    }
    
    stringstream ss(myStr);
    string word = "";
    while(getline(ss, word, ' '))
    {
        if(word != "")
            answer.push_back(word);
    }
    if(answer.empty())
        answer.push_back("EMPTY");
    
    return answer;
}