#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int idx;

bool compare(string str1, string str2)
{
    if(str1[idx] == str2[idx]) return str1 < str2;
    else return str1[idx] < str2[idx];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    idx = n;
    sort(strings.begin(), strings.end(), compare);
    answer = strings;
    
    return answer;
}