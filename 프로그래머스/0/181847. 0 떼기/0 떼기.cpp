#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string n_str) {
    string answer = "";
    
    int cnt = 0;
    for(const auto& e : n_str)
    {
        if(e == '0')
        {
            ++cnt;
            cout << e << " ";
        }
        else
            break;
    }
    cout << "cnt : " << cnt << endl;
    if(cnt == 0)
        return n_str;
    else
    {
        n_str.erase(n_str.begin(), n_str.begin() + cnt);
        answer = n_str;
    }
    return answer;
}