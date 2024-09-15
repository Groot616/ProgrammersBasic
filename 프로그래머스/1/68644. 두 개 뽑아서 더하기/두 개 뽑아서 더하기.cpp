#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    set<int> sum;
    for(int i=0; i<numbers.size() - 1; ++i)
    {
        for(int j=1+i; j<numbers.size(); ++j)
            sum.insert(numbers[i] + numbers[j]);
    }
    
    for(auto it = sum.begin(); it != sum.end(); ++it)
        answer.push_back(*it);
    
    return answer;
}