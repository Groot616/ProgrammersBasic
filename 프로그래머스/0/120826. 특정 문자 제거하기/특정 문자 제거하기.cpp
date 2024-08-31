#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    my_string.erase(remove(my_string.begin(), my_string.end(), letter[0]), my_string.end());
    answer = my_string;
    
    return answer;
}