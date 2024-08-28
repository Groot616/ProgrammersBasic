#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    // 벡터 사이즈
    int size = numbers.size();
    // 각 벡터의 값을 방향에 따라 이동
    if(direction == "right")
    {
        //int tmp = numbers[size - 1];
        //for(int i=0; i<size - 1; ++i)
        //{
            //numbers[size - (1 + i)] = numbers[size - (2 + i)];
        //}
        //numbers[0] = tmp;
        //answer = numbers;
        rotate(numbers.begin(), numbers.end() - 1, numbers.end());
        return numbers;
    }
    else
    {
        //int tmp = numbers[0];
        // 0~5
        //for(int i=0; i<size - 1; ++i)
        //{
        //    numbers[i] = numbers[(1 + i)];
        //}
        //numbers[size - 1] = tmp;
        //answer = numbers;
        rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
        return numbers;
    }

    // return answer;
}