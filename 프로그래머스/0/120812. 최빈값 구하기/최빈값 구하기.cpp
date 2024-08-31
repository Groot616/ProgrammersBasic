#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;

    // 주어진 수가 하나일 경우 무조건 그 수가 최빈값
    if(array.size() == 1)
    {
        answer = array[0];
        return answer;
    }
    
    // set으로 중복값 없이 정렬 및 값 벡터로 치환
    set<int> tmp;
    for (const auto& e : array)
        tmp.insert(e);

    vector<int> element(tmp.begin(), tmp.end());
    // 순환하며 확인
    vector<int> count;
    for (int i = 0; i < element.size(); ++i)
    {
        int cnt = 0;
        for (int j = 0; j < array.size(); ++j)
        {
            if (element[i] == array[j])
                cnt += 1;
        }
        count.push_back(cnt);
    }
    // 최대값 위치 구하기
    auto it = *max_element(count.begin(), count.end());
    for (int i = 0; i < count.size(); ++i)
    {
        if (it == count[i])
        {
            for(int j=i+1; j<count.size();++j)
            {
                if(it == count[j])
                {
                    answer = -1;
                    return answer;
                }
            }
            answer = element[i];
            return answer;
        }
    }
}