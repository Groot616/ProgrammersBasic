#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void makePrimeNum(vector<bool>& primeNum, const int& maxElement)
{
    primeNum.resize(maxElement, true);
    primeNum[0] = primeNum[1] = false;
    for(int i = 2; i * i <= maxElement; ++i)
    {
        if(primeNum[i])
        {
            for(int j = i * i; j <= maxElement; j += i)
                primeNum[j] = false;
        }
    }
}

int solution(vector<int> nums) {
    int answer = 0;

    int maxNum = *max_element(nums.begin(), nums.end());
    vector<bool> primeNum;
    makePrimeNum(primeNum, 3 * maxNum);
    
    vector<int> selector(nums.size(), 0);
    fill(selector.end() - 3, selector.end(), 1);
    do
    {
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(selector[i] == 1)
                sum += nums[i];
        }
        cout << sum << endl;
        if(primeNum[sum])
            ++answer;
    } while(next_permutation(selector.begin(), selector.end()));
    
    return answer;
}