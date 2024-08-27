#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    size_t size = array.size();
    vector<vector<int>> tmp(size, vector<int>(2));
    
    for(int i=0; i<size; i++)
    {
        tmp[i][0] = array[i];
        tmp[i][1] = i;
    }
    sort(tmp.begin(), tmp.end());
    answer.push_back(tmp[size - 1][0]);
    answer.push_back(tmp[size - 1][1]);
    
    return answer;
}