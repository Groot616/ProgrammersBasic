using System;

public class Solution {
    public long[] solution(int x, int n) {
        long[] answer = new long[] {};
        
        Array.Resize(ref answer, n);
        
        answer[0] = x;
        for(int i = 1; i < answer.Length; ++i)
            answer[i] = answer[i - 1] + x;
        
        return answer;
    }
}