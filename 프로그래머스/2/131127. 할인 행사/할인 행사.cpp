#include <string>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <iostream>

using namespace std;

void makeNeedInfo(unordered_map<string, int>& needInfo, const vector<string> &want, const vector<int>& number)
{
    for(int i = 0; i < want.size(); ++i)
        needInfo[want[i]] = number[i];
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    unordered_map<string, int> needInfo;
    makeNeedInfo(needInfo, want, number);
    
    // 초기 슬라이딩 윈도우
    int totalDay = accumulate(number.begin(), number.end(), 0);
    unordered_map<string, int> discountInfo;
    for(int i = 0; i < totalDay; ++i)
        discountInfo[discount[i]]++;
    
    for(int i = 0; i < discount.size() - totalDay + 1; ++i)
    {
        bool bCanBuy = true;
        for(const auto& [item, count] : needInfo)
        {
            if(discountInfo[item] < count)
            {
                bCanBuy = false;
                break;
            }
        }
        if(bCanBuy)
            ++answer;
        
        if(i + totalDay < discount.size())
        {
            discountInfo[discount[i]]--;
            if(discountInfo[discount[i]] == 0)
                discountInfo.erase(discount[i]);
            discountInfo[discount[i + totalDay]]++;
        }    
    }
    
    return answer;
}