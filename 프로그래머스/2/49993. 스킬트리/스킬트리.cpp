#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

void makeMapSkillOrder(const string& skill, unordered_map<char, int>& mapSkillOrder)
{
    int start = 0;
    for(char ch : skill)
    {
        mapSkillOrder[ch] = start;
        ++start;
    }
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    // 선행스킬 순서 map 생성
    unordered_map<char, int> mapSkillOrder;
    makeMapSkillOrder(skill, mapSkillOrder);
    
    // 루프를 통해 가능한 스킬트리인지 확인
    for(string tree : skill_trees)
    {
        // 선행스킬들만 따로 뽑아 순서대로 스킬번호 벡터에 삽입
        vector<int> vecOrder;
        for(int i = 0; i < tree.length(); ++i)
        {
            auto it = mapSkillOrder.find(tree[i]);
            if(it != mapSkillOrder.end())
                vecOrder.push_back(it->second);
        }
        
        // 벡터가 비어있다면 사용가능한 스킬트리
        if(vecOrder.empty())
            ++answer;
        else
        {
            // 벡터의 처음이 0이 아니라면 뒤의 모든 스킬트리 사용불가
            vector<bool> bUsed(skill.length(), false);
            bool bCan = true;
            if(vecOrder[0] != 0)
                bCan = false;
            else
            {
                // 처음이 0인 경우 순서를 체크
                bUsed[0] = true;
                for(int i = 1; i < vecOrder.size(); ++i)
                {
                    if(vecOrder[i] < vecOrder[i - 1] || !bUsed[vecOrder[i] - 1])
                    {
                        bCan = false;
                        break;
                    }
                    else
                        bUsed[i] = true;
                }
            }
            if(bCan)
                ++answer;
        }
    }
    
    return answer;
}