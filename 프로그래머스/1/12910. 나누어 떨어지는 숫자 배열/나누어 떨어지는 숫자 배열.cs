using System;

public class Solution {
    public int[] solution(int[] arr, int divisor) {
        int[] answer = new int[] {};
        
        for(int i = 0; i < arr.Length; ++i)
        {
            if(arr[i] % divisor == 0)
            {
                Array.Resize(ref answer, answer.Length + 1);
                answer[answer.Length - 1] = arr[i];
            }
        }
        Array.Sort(answer);
        if(answer.Length == 0)
        {
            Array.Resize(ref answer, answer.Length + 1);
            answer[0] = -1;
        }
        return answer;
    }
}