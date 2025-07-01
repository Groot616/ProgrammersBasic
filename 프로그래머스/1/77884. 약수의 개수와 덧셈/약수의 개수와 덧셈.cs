using System;

public class Solution {
    public int getDivisor(int num)
    {
        int totalCnt = 0;
        for(int i = 1; i <= num; ++i)
        {
            if(num % i == 0)
                ++totalCnt;
        }
        return totalCnt;
    }
    
    public int solution(int left, int right) {
        int answer = 0;
        
        for(int i = left; i <= right; ++i)
        {
            int divisorCnt = getDivisor(i);
            if(divisorCnt % 2 == 0)
                answer += i;
            else
                answer -= i;
        }
        
        
        return answer;
    }
}