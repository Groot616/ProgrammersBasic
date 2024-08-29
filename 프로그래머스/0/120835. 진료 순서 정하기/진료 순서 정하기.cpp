#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    auto amt = map<int, int>();
    // 반복을 통해 map에 키 추가, 이때 중복은 제외되며, 오름차순으로 자동 정렬
    for(auto& e : emergency)
        amt[e];
    
    // 순위를 입력하기 위한 사이즈
    auto size = amt.size();
    
    // 반복문을 통해 오름차순된 map의 아래부터 --사이즈하여 순위 등록
    for(auto& e : amt)
        e.second = size--;
    
    // emergency를 순위로 업데이트
    for(auto& e : emergency)
        e = amt[e];
    
    answer = emergency;
    return answer;
}