#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int length;
    string str;
    int sCnt = 0;
    int LLCnt = 0;
    int people = 0;
    unordered_map<char, int> totalPeople;

    cin >> length;
    cin >> str;
    size_t found1 = str.find("S");
    while (found1 != string::npos)
    {
        ++sCnt;
        found1 = str.find("S", found1 + 1);
    }
    
    size_t found2 = str.find("LL");
    while (found2 != string::npos)
    {
        ++LLCnt;
        found2 = str.find("LL", found2 + 2);
    }

    if (length >= sCnt + LLCnt + 1)
        cout << sCnt + LLCnt + 1;
    else
        cout << sCnt + LLCnt << '\n';


    return 0;
}
