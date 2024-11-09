#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    unordered_set<string> said;
    said.insert(words[0]);
    for(int i = 1; i < words.size(); ++i)
    {
        if(said.find(words[i]) != said.end() || words[i - 1][words[i - 1].length() - 1] != words[i][0])
        {
            cout << words[i - 1][words[i - 1].length() - 1] << ", " << words[i][0] << '\n';
            answer.push_back(((i + 1) - 1) % n + 1);
            answer.push_back((i + n) / n );
            return answer;
        }
        else
            said.insert(words[i]);
    }
    
    answer.push_back(0);
    answer.push_back(0);

    return answer;
}