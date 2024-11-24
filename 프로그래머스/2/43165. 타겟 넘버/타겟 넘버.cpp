#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1. 숫자를 받음
// 2. 숫자에 대한 +, - 선택진행 후 합 저장
// 3. 다음 숫자에 대한 +, - 선택진행 후 합 저장
// 4. 재귀적으로 반복해서 합이 target과 같으면 cnt증가
int dfs(int idx, int current, const vector<int>& numbers, const int& target)
{
    if(idx == numbers.size())
        return current == target ? 1 : 0;
    
    int add = dfs(idx + 1, current + numbers[idx], numbers, target);
    int subtract = dfs(idx + 1, current - numbers[idx], numbers, target);
    
    return add + subtract;
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    answer = dfs(0, 0, numbers, target);
    
    return answer;
}