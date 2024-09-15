#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<string> element;
    stringstream ss(s);
    string word = "";
    while(getline(ss, word, ' '))
    {
            element.push_back(word);
    }
    for(const auto& e : element)
        cout << e << ",";
    cout << endl;
    
    for(int i=0; i<element.size(); ++i)
    {
        for(int j=0; j<element[i].size(); ++j)
        {
            if(j % 2 == 0)
                element[i][j] = toupper(element[i][j]);
            else
                element[i][j] = tolower(element[i][j]);
        }
    }
    
    for(int i=0; i<element.size(); ++i)
    {
        answer += element[i];
        cout << "\"" << element[i] << "\"" << endl;
        if(i == element.size() - 1)
            break;
        answer += " ";
    }
    int cnt = 0;
    for(int i=s.length() - 1; i>=answer.length(); --i)
        if(s[i] == ' ')
            ++cnt;
    cout << "cnt1 : " << cnt << endl;
    for(const auto& e : element)
    {
        if(e == " ")
            --cnt;
    }
    cout << "cnt2 : " << cnt << endl;
    for(int i=0; i<cnt; ++i)
        answer += ' ';
    
    return answer;
}