#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    if(m == 1)
        answer = section.size();
    else
    {
        int painted = section[0] + m - 1;
        answer += 1;
        for(int i = 1; i < section.size(); ++i)
        {
            if(section[i] > painted)
            {
                painted = section[i] + m - 1;
                answer += 1;
            }
        }
    }
    
    return answer;
}