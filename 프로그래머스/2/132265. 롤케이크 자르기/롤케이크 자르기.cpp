#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    
    unordered_map<int, int> person1;
    unordered_map<int ,int> person2;
    
    for(int i = 0; i < topping.size(); ++i)
        person2[topping[i]]++;
    
    for(int i = 0; i < topping.size(); ++i)
    {
        person1[topping[i]]++;
        person2[topping[i]]--;
        
        if(person2[topping[i]] == 0)
            person2.erase(topping[i]);
        
        if(person1.size() == person2.size())
            ++answer;
    }
    
    return answer;
}