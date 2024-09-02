#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    // 첫번째 원소 기준으로 x축이 같은 원소 찾기
    // 찾았다면 y의 차 구하기
    
    // 첫번째 원소 기준으로 y축이 같은 원소 찾기
    // 찾았따면 x의 차 구하기
    // [3, 4] [-2, 4] [-2, -5] [3, -5]
    // 첫번째 원소 [3, 4] 기준 x축이 같은 원소는 [3, -5], y의 길이는 9
    // 첫번째 원소 [3, 4] 기준 y축이 같은 원소는 [-2, 4], x의 길이는 5
    // 길이를 구할 때 두 수의 곱이 음수면 절대값을 취하여 더하고, 그렇지 않으면 뺀 값에 절대값
    // ex) 5,-4의 경우 절대값을 취한 수의 합 9가 변의 길이, -5,-3의 경우 뺀 값의 절대값2
    
    // 첫번째 원소의 x, y 구하기
    vector<int> firstxy;
    firstxy.push_back(dots[0][0]);
    firstxy.push_back(dots[0][1]);
    
    int x = 0;
    int y = 0;
    
    // 루프를 통해 x축이 같은 원소 찾기
    for(int i=i; i<dots.size(); ++i)
    {
        if(firstxy[0] == dots[i][0])
        {
            if(firstxy[0] * dots[i][0] > 0)
                y = abs(firstxy[1] - dots[i][1]);
            else
                y = abs(firstxy[1]) + abs(dots[i][1]);
        }
            
    }
    // 루프를 통해 y축이 같은 원소 찾기
    for(int i=i; i<dots.size(); ++i)
    {
        if(firstxy[1] == dots[i][1])
        {
            if(firstxy[1] * dots[i][1] > 0)
                x = abs(firstxy[0] - dots[i][0]);
            else
                x = abs(firstxy[0]) + abs(dots[i][0]);
        }
    }
    answer = x * y;
    
    return answer;
}