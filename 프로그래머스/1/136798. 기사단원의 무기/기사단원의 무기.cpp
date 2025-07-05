#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    vector<int> divisorCnt(number + 1);
    divisorCnt[0] = 0;
    for(int i = 1; i < divisorCnt.size(); ++i)
    {
        for(int j = i; j < divisorCnt.size(); j += i)
            ++divisorCnt[j];
    }
    
    for(int i = 1; i < divisorCnt.size(); ++i)
    {
        if(divisorCnt[i] <= limit)
            answer += divisorCnt[i];
        else
            answer += power;
    }
    
    return answer;
}