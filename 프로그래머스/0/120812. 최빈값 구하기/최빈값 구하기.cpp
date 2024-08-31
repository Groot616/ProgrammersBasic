#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    unordered_map<int, int> arr;
    for(const auto& e : array)
        arr[e]++;
    
    int maxVal = 0;
    for(const auto& e : arr)
    {
        if(e.second > maxVal)
        {
            maxVal = e.second;
            answer = e.first;
        }
        else if(maxVal == e.second)
            answer = -1;
    }
    
    return answer;
}