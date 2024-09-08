#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    
    vector<int> element;
    // 02 11 20
    // 03 12 21 30
    for(int i=0; i<board.size(); ++i)
    {
        for(int j=0; j<board[0].size(); ++j)
        {
            if(i + j <= k)
                element.push_back(board[i][j]);
        }
    }
    for(const auto& e : element)
        answer += e;
    
    return answer;
}