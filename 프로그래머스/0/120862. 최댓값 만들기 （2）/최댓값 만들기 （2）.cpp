#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    size_t size = numbers.size();

    // 1. 정렬하기
    sort(numbers.begin(), numbers.end());
    // 2. 가장 최저값 2개 곱과 가장 최대값 2개 곱 구하기
    int minMultiple = numbers[0] * numbers[1];
    int maxMultiple = numbers[size - 2] * numbers[size - 1];
    minMultiple > maxMultiple ? answer = minMultiple : answer = maxMultiple;
    
    return answer;
}