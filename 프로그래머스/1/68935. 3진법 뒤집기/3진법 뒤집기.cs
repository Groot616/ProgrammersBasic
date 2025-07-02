using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        string str = "";
        while(n / 3 != 0)
        {
            str += n % 3;
            n /= 3;
        }
        str += n.ToString();
        char[] arr = str.ToCharArray();
        Array.Reverse(arr);
        for(int i = 0; i < arr.Length; ++i)
        {
            answer += (arr[i] - '0') * (int)Math.Pow(3, i);
        }
        
        
        return answer;
    }
}