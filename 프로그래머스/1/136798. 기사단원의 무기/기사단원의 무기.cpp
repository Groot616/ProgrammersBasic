#include <string>
#include <vector>

using namespace std;

void getNumCnt(int number, vector<int> &weaponCnt)
{
    int cnt = 0;
    if(number == 1)
        weaponCnt.push_back(1);
    else if(number == 2)
        weaponCnt.push_back(2);
    else
    {
        for(int i = 1; i <= number / 2; ++i)
            if(number % i == 0) ++cnt;
        weaponCnt.push_back(cnt + 1);
    }
}

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> weaponCnt;
    
    for(int i = 1; i <= number; ++i)
        getNumCnt(i, weaponCnt);
    for(auto e : weaponCnt)
    {
        if(e <= limit) answer += e;
        else answer += power;
    }
    
    return answer;
}