#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    vector<int> element(30);
    for(int i=0; i<strArr.size(); ++i)
    {
        element[strArr[i].length() - 1]++;
    }
    
    /** 디버깅용 */
    for(const auto& e : element)
        cout << e << ", ";
    /** 디버깅용 */
    
    int max = -1;
    int idx = -1;
    for(int i=0; i<element.size(); ++i)
    {
        if(element[i] >= max)
        {
            max = element[i];
            idx = i;
        }   
    }
    answer = element[idx];
    
    return answer;
}