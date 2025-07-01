public class Solution {
    public bool solution(string s) {
        bool answer = false;
        
        int sLength = s.Length;
        if(sLength == 4 || sLength == 6)
        {
            bool isNum = true;
            for(int i = 0; i < sLength; ++i)
            {
                if((s[i] >= 'a' && s[i] <= 'z') || s[i] >= 'A' && s[i] <= 'Z')
                {
                    isNum = false;
                    break;
                }
            }
            if(isNum)
                answer = true;
        }
        
        return answer;
    }
}