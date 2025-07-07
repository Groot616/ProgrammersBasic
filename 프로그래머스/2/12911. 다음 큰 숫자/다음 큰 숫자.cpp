#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

string changeBinary(int n)
{
    string retStr = "";
    queue<int> q;
    while(n != 0)
    {
        q.push(n % 2);
        n /= 2;
    }
    while(!q.empty())
    {
        retStr += q.front() + '0';
        q.pop();
    }
    return retStr;
}    

int solution(int n) {
    int answer = 0;
    
    string binary = changeBinary(n);
    int cntOne = count(binary.begin(), binary.end(), '1');
    
    int newCntOne = 0;
    while(true)
    {
        n += 1;
        binary = changeBinary(n);
        newCntOne = count(binary.begin(), binary.end(), '1');
        if(cntOne == newCntOne)
            break;
    }
    answer = n;
    
    return answer;
}