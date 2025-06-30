using System;
using System.Linq;

public class Solution {
    public bool solution(int x) {
        bool answer = true;
        
        string str = x.ToString();
        int[] arr = new int[str.Length];
        for(int i = 0; i < str.Length; ++i)
            arr[i] = str[i] - '0';
        int sum = arr.Sum();
        if(x % sum != 0)
            answer = false;
        
        return answer;
    }
}