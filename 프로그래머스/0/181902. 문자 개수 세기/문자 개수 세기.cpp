#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    vector<int> alphaCnt(52, 0);
    
    for(int i=0; i<my_string.length(); ++i)
    {
        int pos = 0;
        if(my_string[i] >= 'A' && my_string[i] <= 'Z')
        {
            pos = my_string[i] - 'A';
            ++alphaCnt[pos];
            pos = 0;
        }
        else
        {
            pos = my_string[i] - 'a' + 26;
            ++alphaCnt[pos];
            pos = 0;
        }
    }
    answer = alphaCnt;
    
    return answer;
}