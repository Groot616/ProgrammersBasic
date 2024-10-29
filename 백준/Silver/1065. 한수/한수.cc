#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (i <= 10)
            ++answer;
        else
        {
            string num = to_string(i);
            int length = num.length();
            set<int> diff;
            for (int j = 1; j < length; ++j)
            {
                diff.insert(num[j] - '0' - (num[j - 1] - '0'));
            }
            if (diff.size() == 1)
                ++answer;
        }
    }
    cout << answer << '\n';

    return 0;
}