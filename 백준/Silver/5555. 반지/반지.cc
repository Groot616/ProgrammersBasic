#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int answer = 0;
    string str;
    int n;

    cin >> str;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string ring;
        cin >> ring;

        if (ring.find(str) != string::npos)
            ++answer;
        else
        {
            for (int j = 1; j <= str.length() - 1; ++j)
            {
                string newRing = ring.substr(ring.length() - j, j) + ring.substr(0, ring.length() - j);
                if (newRing.find(str) != string::npos)
                {
                    ++answer;
                    break;
                }
            }
        }
    }
    cout << answer << '\n';

    return 0;
}
