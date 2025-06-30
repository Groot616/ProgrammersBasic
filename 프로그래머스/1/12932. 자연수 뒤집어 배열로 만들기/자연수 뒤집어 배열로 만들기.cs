using System;

public class Solution {
    public int[] solution(long n) {
        int[] answer = new int[] {};
        
        string str = n.ToString();
        int length = str.Length;
        Array.Resize(ref answer, length);
        
        for(int i = str.Length - 1; i >= 0; --i)
            answer[length - 1 - i] = str[i] - '0';
        
        return answer;
    }
}