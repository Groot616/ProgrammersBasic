#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    
    if(is_suffix.length() > my_string.length())
    {
        answer = 0;
        return answer;
    }
    else
    {
        int cnt = 0;
        for(int i=0; i<is_suffix.length(); ++i)
        {
            if(my_string[my_string.length() - 1 -i] == is_suffix[is_suffix.length() - 1 -i])
                ++cnt;
            else
                --cnt;
        }
        
        if(cnt == is_suffix.length()) answer = 1;
        else answer = 0;
    }
    
    return answer;
}