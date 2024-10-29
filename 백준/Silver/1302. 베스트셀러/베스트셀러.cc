#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b)
{
    if (a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    unordered_map<string, int> bookCnt;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string bookName;
        cin >> bookName;
        bookCnt[bookName]++;
    }

    vector<pair<string, int>> result;
    for (auto it = bookCnt.begin(); it != bookCnt.end(); ++it)
        result.push_back(make_pair(it->first, it->second));
    
    sort(result.begin(), result.end(), compare);
    cout << result[0].first << '\n';

    return 0;
}