#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<bool> primeNum(n + 1, true);
    primeNum[0] = false;
    primeNum[1] = false;

    for(int i = 2; i < primeNum.size(); ++i)
    {
        if(primeNum[i])
        {
            for(int j = i + i; j < primeNum.size(); j += i)
                primeNum[j] = false;
        }
    }
    for(const auto& e : primeNum)
    {
        if(e)
            ++answer;
    }
    
    return answer;
}