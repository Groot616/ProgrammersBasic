#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(auto& e : num_list)
    {
        int cnt = 0;
        while(e > 1)
        {
            if(e % 2 == 0)
            {
                e /= 2;
                ++cnt;
            }
            else
            {
                e = (e - 1)/2;
                ++cnt;
            }
        }
        answer += cnt;
        cnt = 0;
    }
    
    return answer;
}