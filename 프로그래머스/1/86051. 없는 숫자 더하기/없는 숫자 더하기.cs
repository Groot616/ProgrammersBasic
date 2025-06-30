using System;
using System.Linq;

public class Solution {
    public int solution(int[] numbers) {
        int answer = -1;
        
        int totalSum = 45;
        int sum = numbers.Sum();
        answer = totalSum - sum;
        
        return answer;
    }
}