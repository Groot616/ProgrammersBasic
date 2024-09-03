#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    
    if(date1[0] < date2[0])
    {
        answer = 1;
        return answer;
    }
    else if(date1[0] > date2[0])
    {
        answer = 0;
        return answer;
    }
    else if(date1[1] < date2[1])
    {
        answer = 1;
        return answer;
    }
    else if(date1[1] > date2[1])
    {
        answer = 0;
        return answer;
    }
    else if(date1[2] < date2[2])
    {
        answer = 1;
        return answer;
    }
    else
        answer = 0;
    
    return answer;
}