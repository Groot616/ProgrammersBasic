using System;
using System.Linq;

public class Solution {
    public double solution(int[] arr) {
        double answer = 0;
        
        int length = arr.Length;
        int sum = arr.Sum();
        
        answer = (double)sum / length;
        
        return answer;
    }
}