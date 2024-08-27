#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    size_t length = cipher.length();

    for (int i = 1; i <= length; i++)
    {
        if (i * code - 1 >= length)
            break;
        answer += cipher[i * code - 1];
    }

    return answer;
}