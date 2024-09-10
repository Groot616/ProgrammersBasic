#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<int, string>> semina;

    for (int i = 0; i < 7; ++i)
    {
        string str;
        int cnt;
        cin >> str >> cnt;
        semina.push_back(make_pair(cnt, str));
    }
    sort(semina.begin(), semina.end());
    
    cout << semina[6].second << "\n";
    
    return 0;
}