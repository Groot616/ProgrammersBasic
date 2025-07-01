using System;
using System.Linq;

public class Solution {
    public int[] solution(int[] arr) {
        int[] answer = new int[] {};
        
        if(arr.Length == 1)
        {
            Array.Resize(ref answer, 1);
            answer[0] = -1;
        }
        else
        {
            Array.Resize(ref answer, arr.Length - 1);
            
            int minVal = arr.Min();
            int idx = 0;
            for(int i = 0; i < arr.Length; ++i)
            {
                if(arr[i] != minVal)
                {
                    answer[idx] = arr[i];
                    ++idx;
                }
            }
        }
        
        return answer;
    }
}