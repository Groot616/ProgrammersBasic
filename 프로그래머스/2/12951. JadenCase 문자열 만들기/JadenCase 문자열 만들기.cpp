#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<string> strs;
    stringstream ss(s);
    string word = "";
    while(getline(ss, word, ' '))
        strs.push_back(word);
    
    for(int i = 0; i < strs.size(); ++i)
    {
        if(strs[i][0] >= 'a' && strs[i][0] <= 'z')
            strs[i][0] = toupper(strs[i][0]);
        for(int j = 1; j < strs[i].length(); ++j)
        {
            if(strs[i][j] >= 'A' && strs[i][j] <= 'Z')
                strs[i][j] = tolower(strs[i][j]);
        }
    }
    
    answer += strs[0];
    for(int i = 1; i < strs.size(); ++i)
        answer += " " + strs[i];
    if(s[s.length() - 1] == ' ')
        answer += " ";
    
    return answer;
}