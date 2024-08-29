#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int result = 0;

    for (int j=0; j<array.size(); ++j)
    {
        string str = to_string(array[j]);
        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] == '7')
                result += 1;
        }
    }
    answer = result;

    return answer;
}