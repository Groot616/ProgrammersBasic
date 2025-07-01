using System;

public class Solution {
    public int GCD(int a, int b)
    {
        while(b != 0)
        {
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        return a;
    }
    
    public int LCM(int a, int b)
    {
        return a * b / GCD(a, b);
    }
    
    public int[] solution(int n, int m) {
        int[] answer = new int[] {};
        
        Array.Resize(ref answer, 2);
        answer[0] = GCD(n, m);
        answer[1] = LCM(n, m);
        
        return answer;
    }
}