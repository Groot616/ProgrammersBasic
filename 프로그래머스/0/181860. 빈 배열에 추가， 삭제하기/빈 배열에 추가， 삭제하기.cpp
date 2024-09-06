#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    // flag 의 값에 따라 arr의 값 추가
    for(int i=0; i<flag.size(); ++i)
    {
        if(flag[i] == true)
        {
            for(int j=0; j<arr[i]*2; ++j)
            {
                answer.push_back(arr[i]);
            }
        }
        else
        {
            for(int j=0; j<arr[i]; ++j)
            {
                answer.pop_back();
            }
        }
    }
    
    return answer;
}