#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    for(int i=0; i<arr.size(); ++i)
    {
        int cnt = 0;
        for(int j=0; j<delete_list.size(); ++j)
        {
            if(arr[i] != delete_list[j])
                ++cnt;
        }
        if(cnt == delete_list.size())
            answer.push_back(arr[i]);
    }
    
    return answer;
}