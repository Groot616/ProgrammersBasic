#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    // 1. 배열의 길이 확인
    // 길이 : 10 2로 나누면 0101, 역정렬시 1010, 길이만큼 거듭제곱+1하면 최소한의 거듭제곱
    // 2. 배열의 길이보다 큰 2의 거듭제곱 확인
    // 3. 거듭제곱의 길이 - 배열의 길이만큼 0 추가
    
    // 배열의 길이 확인 및 스택에 2진수 변환 추가
    int arrSize = arr.size();
    stack<int> sizeToBit;
    while(arrSize > 0)
    {
        sizeToBit.push(arrSize % 2);
        arrSize /= 2;
    }
    
    // stack 내에 1이 하나만 있으면 무조건 2의 거듭제곱(1제외)
    int bit0 = 0;
    int bit1 = 0;
    // 스택의 크기가 1, 즉 배열의 길이가 1이 아닌 경우에
    if(sizeToBit.size() != 1)
    {
        while(!sizeToBit.empty())
        {
            if(sizeToBit.top() == 1)
            {
                ++bit1;
                sizeToBit.pop();
            }
            else
            {
                ++bit0;
                sizeToBit.pop();
            }
        }
    }
    // 스택의 크기가 1인 경우 
    else
    {
        answer = arr;
        //answer.push_back(0);
        return answer;
    }
    
    cout << "bit0 : " << bit0 << ", bit1 : " << bit1 << endl;
    
    int stackSize = bit0 + bit1;
    int length = 1;
    for(int i=0; i<stackSize; ++i)
        length *= 2;
    cout << "length - arr.size() : " << length - arr.size() << endl;
    
    
    if(bit1 == 1)
        answer = arr;
    else
    {
        answer = arr;
        for(int i=0; i<length - arr.size(); ++i)
            answer.push_back(0);
    }
    
    return answer;
}