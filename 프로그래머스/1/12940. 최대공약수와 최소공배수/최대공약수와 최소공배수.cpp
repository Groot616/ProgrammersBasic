#include <string>
#include <vector>
#include <iostream>
int gcd(int a, int b)
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    answer.push_back(gcd(n, m));
    cout << gcd(n, m) << endl;
    answer.push_back(n * m / gcd(n, m));
    
    return answer;
}