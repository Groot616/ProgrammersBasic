#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;

    unordered_set<int> result;
    for(int length = 1; length < elements.size(); ++length)
    {
        for(int start = 0; start < elements.size(); ++start)
        {
            int sum = 0;
            for(int i = 0; i < length; ++i)
                sum += elements[(start + i) % elements.size()];
            result.insert(sum);
        }
    }
    answer = result.size() + 1;

    return answer;
}