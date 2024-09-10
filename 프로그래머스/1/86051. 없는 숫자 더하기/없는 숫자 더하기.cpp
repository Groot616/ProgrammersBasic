#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    
    int sum = 0;
    sum = accumulate(numbers.begin(), numbers.end(), 0);
    int all = (9 * (9 + 1)) / 2;
    answer = all - sum;
    
    return answer;
}