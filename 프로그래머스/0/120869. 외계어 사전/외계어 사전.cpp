#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    
    // bool 타입 벡터 하나 생성하고 사이즈는 spell의 사이즈와 동일하게, 기본 false로 할당
    // 1. 루프를 통해 dic의 모든 원소에 접근
    // 2. 해당 원소의 알파벳중에 spell과 동일한게 있다면 각 idx true로 변경
    // bool 타입 벡터 전부 true일 경우 result = 1
    vector<int> cnt(spell.size(), 0);
    for(int i=0; i<dic.size(); ++i)
    {
        for(int j=0; j<dic[i].size(); ++j)
        {
            for(int k=0; k<spell.size(); ++k)
            {
                if(dic[i][j] == spell[k][0])
                {
                    // s 있어서 cnt 올라가고 o 두번 카운트 올라가서 3으로 인식되는 문제
                    ++cnt[k];
                    cout << "i : " << i << ", j : " << j << ", k : " << k << endl;
                    cout << "dic[i][j] : " << dic[i][j] << ", spell[k] : " << spell[k] << endl;
                    cout << "-------------------------" << endl;
                }
            } 
        }
        cout << "onc cycle overed, cnt : ";
        for(const auto& e : cnt)
            cout << e << " ";
        cout << endl;
        cout << "=========================" << endl;
        int check = 0;
        for(auto& e : cnt)
        {
            if(e == 1)
            {
                check += 1;;
            }
        }
        if(check == spell.size())
        {
            answer = 1;
            return answer;
        }
        else
        {
            for(int u=0; u<spell.size(); ++u)
                cnt[u] = 0;
        }
    }
    answer = 2;
    
    return answer;
}