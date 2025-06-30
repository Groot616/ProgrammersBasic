using System;

public class Solution {
    public long solution(long n) {
        long answer = 0;
        
        double num = Math.Sqrt(n);
        Console.WriteLine(num);
        if(Math.Pow(Math.Ceiling(num), 2) != n)
            answer = -1;
        else
            answer = (long)Math.Pow(num + 1, 2);
        
        return answer;
    }
}