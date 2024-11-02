#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    stack<int> result;
    for(int i = 0; i < moves.size(); ++i)
    {
        for(int j = 0; j < board.size(); ++j)
        {
            if(board[j][moves[i] - 1] != 0)
            {
                result.push(board[j][moves[i] - 1]);
                board[j][moves[i] - 1] = 0;
                break;
            }
            else
                continue;
        }
        vector<int> doll(2, 0);
        for(int j = 0; j < 2; ++j)
        {
            if(!result.empty())
            {
                doll[j] = result.top();
                result.pop();
            }
        }
        if(doll[0] == doll[1] && doll[0] != 0)
            answer += 2;
        else
        {
            result.push(doll[1]);
            result.push(doll[0]);
        }    
    }
    
    return answer;
}