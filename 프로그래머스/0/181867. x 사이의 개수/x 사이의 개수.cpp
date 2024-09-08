#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    
    bool bIsExist = false;
    if(myString[myString.length() - 1] == 'x')
        bIsExist = true;
    
    vector<string> element;
    stringstream ss(myString);
    string word = "";
    while(getline(ss, word, 'x'))
    {
        // if(word != "")
            element.push_back(word);
    }
    
    /** 디버깅용 */
    for(const auto& e : element)
    {
        cout << e << ",";
    }
    cout << "end" << endl;
    /** 디버깅용 */
    
    for(const auto& e : element)
        answer.push_back(e.length());
    if(bIsExist)
        answer.push_back(0);
    
    return answer;
}