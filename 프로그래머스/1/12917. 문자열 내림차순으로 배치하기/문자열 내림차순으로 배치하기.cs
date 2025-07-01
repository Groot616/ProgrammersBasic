using System;

public class Solution {
    public string solution(string s) {
        string answer = "";
        
        int strLength = s.Length;
        char[] cArr = new char[strLength];
        for(int i = 0; i < strLength; ++i)
            cArr[i] = s[i];
        Array.Sort(cArr);
        Array.Reverse(cArr);
        
        for(int i = 0; i < s.Length; ++i)
            answer += cArr[i];
        
        return answer;
    }
}