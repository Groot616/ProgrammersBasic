#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int>quot;
    for(int i=1; i<=n;++i)
        if(n % i == 0)
            quot.push_back(i);
    answer = quot.size();
    
    return answer;
}