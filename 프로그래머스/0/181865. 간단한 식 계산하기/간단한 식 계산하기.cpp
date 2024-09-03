#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    vector<string> element;
    stringstream ss(binomial);
    string word;
    while(getline(ss, word, ' '))
    {
        element.push_back(word);
    }
    
    if(element[1] == "+")
        answer = stoi(element[0]) + stoi(element[2]);
    else if(element[1] == "-")
        answer = stoi(element[0]) - stoi(element[2]);
    else
        answer = stoi(element[0]) * stoi(element[2]);
    
    return answer;
}