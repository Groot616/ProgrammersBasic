#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string rny_string) {
    string answer = "";

    size_t pos = 0;
    while ((pos = rny_string.find('m', pos)) != string::npos)
    {
        rny_string.replace(pos, 1, "rn");
        pos += 2;
    }
    answer = rny_string;
    
    return answer;
}