#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    reverse(num_list.begin(), num_list.end());
    
    for(int i=0; i<num_list.size(); ++i)
    {
        answer.push_back(num_list[i]);
    }
    
    return answer;
}