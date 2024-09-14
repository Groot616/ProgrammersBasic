#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer(k, -1);
    
    // unordered_map에 arr의 뒤에서부터 저장, unordered_map<int, int> n숫자 idx번에 위치
    // 가장 앞쪽에 위치한 idx로 갱신됨
    // idx순으로 정렬
    // unordered_map 사이즈가 k보다 작을 경우 idx순으로 answer값 수정
    // k보다 클 경우 k만큼만 dix순으로 answer값 수정
    unordered_map<int, int> arrMap;
    for(int i=arr.size() - 1; i>=0; --i)
        arrMap[arr[i]] = i;
    
    vector<pair<int, int>> sorted_arrMap;
    for(auto it = arrMap.begin(); it != arrMap.end(); ++it)
        sorted_arrMap.push_back(make_pair(it->first, it->second));
    sort(sorted_arrMap.begin(), sorted_arrMap.end(), compare);
    
    for(const auto& e : sorted_arrMap)
        cout << e.first << ", " << e.second << endl;
    
    // k보다 작거나 같은 개수의 숫자가 있을 경우
    if(sorted_arrMap.size() <= k)
        for(int i=0; i<sorted_arrMap.size(); ++i)
            answer[i] = sorted_arrMap[i].first;
    // k보다 많은 개수의 숫자가 있을 경우
    else
        for(int i=0; i<k; ++i)
            answer[i] = sorted_arrMap[i].first;
    
    
    return answer;}