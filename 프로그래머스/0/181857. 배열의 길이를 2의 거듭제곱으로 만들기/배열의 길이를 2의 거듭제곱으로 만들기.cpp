#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int arrSize = arr.size();
    int dst = pow(2, ceil(log2(arrSize)));

    answer = arr;
    for(int i=0; i<dst - arrSize; ++i)
        answer.push_back(0);
    
    return answer;
}