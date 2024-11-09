#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;
    
    for(int i = 1; i < arr.size(); ++i)
    {
        if(arr[i] % arr[i - 1] == 0)
            continue;
        else
            arr[i] = lcm(arr[i], arr[i - 1]);
    }
    answer = arr[arr.size() - 1];
    
    return answer;
}