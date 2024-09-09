#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    // 5 50 55 500 505 550 555 5000 5005 5050 5055 5500 5505 5550 5555 ...
    // 1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 ...
    // 0 0 0 0 0 0 0 0 0 0 0 0
    // 5 0 5 0 5 0 5 0 0 5 0 5 0
    
    while(l<= r)
    {
        if(l == 5)
        {
            answer.push_back(l);
            ++l;
        }
        else
        {
            string numStr = to_string(l);
            int length = numStr.length();
            int cnt = 0;
            for(int i=0; i<length; ++i)
            {
                if(numStr[i] == '5' || numStr[i] == '0')
                {
                    ++cnt;
                }
            }
            if(cnt == length)
                answer.push_back(l);
            ++l;
        }
    }
    if(answer.empty())
        answer.push_back(-1);
    
    return answer;
}