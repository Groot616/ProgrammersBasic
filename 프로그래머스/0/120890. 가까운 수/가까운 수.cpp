#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    auto size = array.size();
    vector<int> diff;
    
    // 정렬(오름차순을 통해 min_element 사용시 가장 작은 값을 뽑기 위함)
    sort(array.begin(), array.end());
    // 반복문을 통해 차를 구하고 절대값을 취하여 할당
    for(const auto& e : array)
        e - n < 0 ? diff.push_back(n - e) : diff.push_back(e - n);
    // 가장 작은 값의 위치를 찾고, 해당 위치의 값 반환
    int minVal = *min_element(diff.begin(), diff.end());
    for(int i=0; i<diff.size(); ++i)
    {
        if(diff[i] == minVal)
        {
            answer = array[i];
            break;
        }
    }
    
    return answer;
}