#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    if(m == 1)
        answer = section.size();
    else
    {
        while(true)
        {
            if(section.size() == 0)
                break;
            
            int maxWidth = section[0] + m - 1;
            bool bFind = false;
            while(true)
            {
                if(section.size() == 0)
                    break;
                
                if(section[0] <= maxWidth)
                {
                    bFind = true;
                    section.erase(section.begin());
                }
                else
                    break;
            }
            if(bFind)
                ++answer;
        }
    }
    
    return answer;
}