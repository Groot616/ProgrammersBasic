using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        int num = 2;
        while(true)
        {
            if(n % num == 1)
                break;
            
            ++num;
        }
        answer = num;
        
        return answer;
    }
}