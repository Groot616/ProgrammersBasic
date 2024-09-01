#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;

    /*
     * 수학적 공식을 이용한 풀이
     * if(sides[0] > sides[1])
     *     swap(sides[0], sides[1]);
     * answer = sides[0] * (sides[0] - 1);
     */
    
    int max = *max_element(sides.begin(), sides.end());
    int min = *min_element(sides.begin(), sides.end());
    int total = sides[0] + sides[1];
    set<int> element;
    // 나머지 한 변이 가장 긴 변인 경우
    for (int i = max; i < total; ++i)
    {
        element.insert(i);
    }
    // 원소중 하나가 가장 긴 변인 경우
    for (int i = max - min + 1; i < max; ++i)
    {
        element.insert(i);
    }

    int cnt = 0;
    for (const auto& e : element)
    {
        ++answer;
    }

    return answer;
}