#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    if(k % 2 == 1)
        for(auto& e : arr)
            e *= k;
    else
        for(auto& e : arr)
            e += k;
    answer = arr;
    
    return answer;
}