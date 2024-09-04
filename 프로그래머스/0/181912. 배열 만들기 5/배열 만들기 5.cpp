#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(int i=0; i<intStrs.size(); ++i)
    {
        intStrs[i] = intStrs[i].substr(s, l);
        if(stoi(intStrs[i]) > k)
            answer.push_back(stoi(intStrs[i]));
    }
    
    return answer;
}