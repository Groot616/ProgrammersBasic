#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int min = -1;
    int max = -1;
    
    // 현재 상태에서 처음 만나는 2를 min에 할당
    // 배열을 뒤집은 후 처음 만나는 2를 max에 할당
    // arr의 크기에서 max를 뺀 값이 min과 같다면 2는 하나
    // 그렇지 않다면 min~max 값 출력
    for(int i=0; i<arr.size(); ++i)
    {
        if(arr[i] == 2)
        {
            min = i;
            break;
        }
    }
    cout << min << endl;
    reverse(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); ++i)
    {
        if(arr[i] == 2)
        {
            max = arr.size() - 1 -i;
            break;
        }
    }
    cout << max << endl;
    reverse(arr.begin(), arr.end());
    if(min == -1 && max == -1)
        answer.push_back(-1);
    else if(min == max)
        answer.push_back(arr[min]);
    else
    {
        for(int i=min; i<=max; ++i)
        {
            answer.push_back(arr[i]);
        }
    }
            
    
    return answer;
}