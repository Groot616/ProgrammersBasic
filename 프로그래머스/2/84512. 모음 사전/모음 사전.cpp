#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <iostream>

using namespace std;

unordered_map<char, int> alpha = {{'A', 1}, {'E', 2}, {'I', 3}, {'O', 4}, {'U', 5}};

int solution(string word) {
    int answer = 0;
    
    for(int i = 0; i < word.length(); ++i)
    {
        int total = 0;
        for(int j = 1; j <= 5 - i; ++j)
            total += (int)pow(5, j);
        total /= 5;
        answer += total * (alpha[word[i]] - 1) + 1;
    }
    
    return answer;
}