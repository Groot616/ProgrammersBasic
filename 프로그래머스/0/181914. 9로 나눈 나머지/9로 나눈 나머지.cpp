#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    
    int sum = 0;
    for(const auto& e : number)
        sum += e - '0';
    answer = sum % 9;
    
    return answer;
}