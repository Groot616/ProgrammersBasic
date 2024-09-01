#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    
    vector<string> arr = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    vector<string> mos;
    stringstream ss(letter);
    string word;
    while (getline(ss, word, ' '))
    {
       mos.push_back(word);
    }
    
    for(int i=0; i<mos.size(); ++i)
    {
        for(int j=0; j<arr.size(); ++j)
        {
            if(mos[i] == arr[j])
                answer += 97 + j;
        }
    }
    
    return answer;
}