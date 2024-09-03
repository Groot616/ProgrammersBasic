#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = 0;
    
    if(arr[idx] == 1)
    {
        answer = idx;
        return answer;
    }
    else
    {
        int cnt = idx;
        for(int i=idx; i<arr.size(); ++i)
        {
            if(arr[i] != 1)
                ++cnt;
            else if(arr[i] == 1)
            {
                answer = cnt;
                return answer;
            }
        }
        if(cnt == arr.size())
            answer = -1;
    }
    
    
    return answer;
}