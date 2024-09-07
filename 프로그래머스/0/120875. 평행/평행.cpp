#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    // 기울기가 동일할 경우 두 직선은 평행
    // 두 직선을 구해야함(dots중에서 두개 집기)
    // 01 23 // 02 13 // 03 12

    vector<vector<float>> gradient(3, vector<float>(2));
    gradient[0][0] = abs(1.0 * dots[0][0] - dots[1][0]) / (dots[0][1] - dots[1][1]);
    gradient[0][1] = abs(1.0 * dots[2][0] - dots[3][0]) / (1.0 * dots[2][1] - dots[3][1]);
    gradient[1][0] = abs(1.0 * dots[0][0] - dots[2][0]) / (1.0 * dots[0][1] - dots[2][1]);
    gradient[1][1] = abs(1.0 * dots[1][0] - dots[3][0]) / (dots[1][1] - dots[3][1]);
    cout << -2.0 / -4.0 << endl;
    gradient[2][0] = abs(1.0 * dots[0][0] - dots[3][0]) / (dots[0][1] - dots[3][1]);
    gradient[2][1] = abs(1.0 * dots[1][0] - dots[2][0]) / (dots[1][1] - dots[2][1]);
    
    int cnt = 0;
    for(int i=0; i<3; ++i)
    {
        if(gradient[i][0] == gradient[i][1])
            ++cnt;
    }
    if(cnt >= 1)
        answer = 1;
    else
        answer = 0;
    
    return answer;
}