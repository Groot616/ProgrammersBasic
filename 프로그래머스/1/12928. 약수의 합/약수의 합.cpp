#include <string>
#include <vector>
#include <set>
#include <numeric>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    set<int> element;
    for(int i=1; i<=n; ++i)
    {
        if(n % i == 0)
            element.insert(i);
    }
    answer = accumulate(element.begin(), element.end(), 0);
    
    return answer;
}