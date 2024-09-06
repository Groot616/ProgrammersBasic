#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    
    // 1. col 과 row 의 길이 확인
    // 2. 길이가 짧은 쪽을 추가하고 0으로 할당
    int col = arr.size();
    int row = arr[0].size();
    if(col > row)
    {
        for(int i=0; i<col; ++i)
            for(int j=0; j<col-row; ++j)
            arr[i].push_back(0);
    }
    else
    {
        vector<int> v(row, 0);
        for(int i=0; i<row - col; ++i)
                arr.push_back(v);
    }
    answer = arr;
    
    return answer;
}