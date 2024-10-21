#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    vector<bool> primeNum(totalSum + 1, true);
    primeNum[0] = primeNum[1] = false;
    
    for(int i=2; i<=totalSum; ++i)
    {
        if(primeNum[i] == true)
        {
            for(int j=i*i; j<=totalSum; j += i)
                primeNum[j] = false;
        }
    }
    
    for(int i=0; i<nums.size()-2; ++i)
    {
        for(int j=i+1; j<nums.size()-1; ++j)
        {
            for(int k=j+1; k<nums.size(); ++k)
            {
                if(primeNum[nums[i] + nums[j] + nums[k]] == true)
                    ++answer;
            }
        }
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}