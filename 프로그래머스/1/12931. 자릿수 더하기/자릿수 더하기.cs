using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        string str = n.ToString();
        int length = str.Length;
        
        for(int i = 0; i < length; ++i)
            answer += str[i] - '0';
        
        return answer;
    }
}