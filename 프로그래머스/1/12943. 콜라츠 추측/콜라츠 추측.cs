public class Solution {
    public int solution(int num) {
        int answer = 0;
        
        long number = num;
        int cnt = 0;
        while(cnt != 500 && number != 1)
        {
            if(number % 2 == 0)
                number /= 2;
            else
                number = number * 3 + 1;
            
            ++cnt;
        }
        
        if(number == 1)
            answer = cnt;
        else
            answer = -1;
        
        return answer;
    }
}