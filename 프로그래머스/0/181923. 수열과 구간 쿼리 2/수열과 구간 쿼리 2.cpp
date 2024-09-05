#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    vector<int> tmp;
    for(int i=0; i<queries.size(); ++i)
    {
        for(int j=queries[i][0]; j<=queries[i][1]; ++j)
        {
            if(arr[j] > queries[i][2])
            {
                tmp.push_back(arr[j]);
            }
        }
        if(tmp.empty())
            answer.push_back(-1);
        else
        {
            sort(tmp.begin(), tmp.end());
            answer.push_back(tmp[0]);
            tmp.clear();
        }
    }
    
    return answer;
}