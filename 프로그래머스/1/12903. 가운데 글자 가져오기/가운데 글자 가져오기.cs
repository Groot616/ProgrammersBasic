public class Solution {
    public string solution(string s) {
        string answer = "";
        
        int length = s.Length;
        if(length % 2 == 1)
            answer = s.Substring(length / 2, 1);
        else
            answer = s.Substring(length / 2 - 1, 2);
        
        return answer;
    }
}