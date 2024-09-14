#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<string, int> phoneCnt;

bool isPrefix(const string& element)
{
    string prefix = "";
    for(char e : element)
    {
        prefix += e;
        if(phoneCnt.find(prefix) != phoneCnt.end() && prefix != element)
            return true;
    }
    return false;
}

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    for(const auto& e : phone_book)
        phoneCnt[e] = 1;
    
    for(const auto& e : phone_book)
    {
        if(isPrefix(e))
        {
            answer = false;
            return answer;
        }
    }
    answer = true;
    
    return answer;
}