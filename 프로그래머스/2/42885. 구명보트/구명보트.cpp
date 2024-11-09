#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.rbegin(), people.rend());
    int min = 0;
    int max = people.size() - 1;
    if(people.size() == 1)
    {
        answer = 1;
        return answer;
    }
    
    for(int i = min; i <= max; ++i)
    {
        if(people[i] > limit / 2 && people[i] + people[max] > limit)
            ++answer;
        else if(people[i] > limit / 2 && people[i] + people[max] <= limit)
        {
            ++answer;
            --max;
        }
        else if(people[i] <= limit / 2 && people[i] + people[max <= limit])
        {
            ++answer;
            --max;
        }
    }
    
    return answer;
}