using System;

public class Solution {
    public long solution(long n) {
        long answer = 0;
        
        string str = n.ToString();
        char[] cArr = new char[str.Length];
        for(int i = 0; i < str.Length; ++i)
            cArr[i] = str[i];
        Array.Sort(cArr);
        Array.Reverse(cArr);
        for(int i = 0; i < cArr.Length; ++i)
            Console.Write(cArr[i]);
        
        for(int i = 0; i < str.Length; ++i)
            answer = 10 * answer + cArr[i] - '0';
        
        return answer;
    }
}