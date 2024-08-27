#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    size_t length = my_string.length();
    for(int i=0; i<length; ++i)
    {
        if(my_string[i] >=65 && my_string[i] <=90)
            void();
        else if(my_string[i] >= 97 && my_string[i] <= 122)
            void();
        else
        {
            answer += my_string[i] - '0';
        }
    }
    
    return answer;
}