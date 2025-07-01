using System;

public class Solution {
    public int solution(string t, string p) {
        int answer = 0;
        
        int pLength = p.Length;
        int tLength = t.Length;
        if(pLength == tLength && int.Parse(t) <= int.Parse(p))
        {
            answer = 1;
            return answer;
        }
            
        for(int i = 0; i < tLength - (pLength - 1); ++i)
        {
            long num = long.Parse(t.Substring(i, pLength));
            if(num <= long.Parse(p))
                ++answer;
        }
        
        return answer;
    }
}