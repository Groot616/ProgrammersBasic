#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    int result = accumulate(d.begin(), d.end(), 0);
    cout << "result : " << result << endl;
    if(result <= budget)
        answer = d.size();
    else
    {
        int result = 0;
        sort(d.begin(), d.end());

        for(int i=0; i<d.size(); ++i)
        {
            result += d[i];
            answer = i + 1;
            if(result > budget)
            {
                answer -= 1; 
                return answer;
            }
            else if(result == budget)
            {
                return answer;
            }
        }
    }
    
    return answer;
}