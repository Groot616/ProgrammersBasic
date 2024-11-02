#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    map<char, int> xNumCnt;
    map<char, int> yNumCnt;
    
    for(int i = 0; i < X.length(); ++i)
        xNumCnt[X[i]]++;
    for(int i = 0; i < Y.length(); ++i)
        yNumCnt[Y[i]]++;
    
    for(auto itX = xNumCnt.begin(); itX != xNumCnt.end(); ++itX)
    {
        auto itY = yNumCnt.find(itX->first);
        if(itY != yNumCnt.end())
        {
            int minSize = 0;
            itX->second < itY->second ? minSize = itX->second : minSize = itY->second;
            for(int i = 0; i < minSize; ++i)
                answer += itX->first;
        }
    }
    
    if(answer.length() == 0)
        answer = "-1";
    else if(answer.length() != 0)
    {
        int zeroCnt = 0;
        for(int i = 0; i < answer.length(); ++i)
            if(answer[i] == '0') ++zeroCnt;
        if(zeroCnt == answer.length())
            answer = "0";
        else
            sort(answer.rbegin(), answer.rend());
    }
    
    return answer;
}