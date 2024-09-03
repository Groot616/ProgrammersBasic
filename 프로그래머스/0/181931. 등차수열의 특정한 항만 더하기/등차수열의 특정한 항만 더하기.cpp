#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    
    vector<int> element;
    for(int i=0; i<included.size(); ++i)
    {
        if(i == 0)
            element.push_back(a);
        else
            element.push_back(a + (d * i));
    }
    
    int sum = 0;
    for(int i=0; i<included.size(); ++i)
    {
        if(included[i])
            sum += element[i];
    }
    answer = sum;
    
    return answer;
}