#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    string numStr = to_string(n);
    vector<char> element;
    for(int i=numStr.length() - 1; i>=0; --i)
    {
        element.push_back(numStr[i]);
    }
    sort(element.begin(), element.end());
    for(int i=0; i<element.size(); ++i)
    {
        answer += (element[i] - '0') * pow(10, i);
    }
    
    return answer;
}