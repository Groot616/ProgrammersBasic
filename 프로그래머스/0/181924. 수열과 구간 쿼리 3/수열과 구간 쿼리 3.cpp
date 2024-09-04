#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(const auto& e : queries)
    {
        swap(arr[e[0]], arr[e[1]]);
    }
    answer = arr;
    return answer;
}