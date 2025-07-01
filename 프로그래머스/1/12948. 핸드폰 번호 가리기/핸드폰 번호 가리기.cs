public class Solution {
    public string solution(string phone_number) {
        string answer = "";
        
        int strLength = phone_number.Length;
        for(int i = 0; i < strLength - 4; ++i)
            answer += '*';
        answer += phone_number.Substring(strLength - 4);
        
        return answer;
    }
}