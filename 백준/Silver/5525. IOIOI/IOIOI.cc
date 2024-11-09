#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer = 0;
    int n, s;
    string text;

    cin >> n;
    cin >> s;
    cin >> text;

    for (int i = 0; i < s; ++i)
    {
        int check = 0;
        if (text[i] != 'O')
        {
            while (text[i + 1] == 'O' && text[i + 2] == 'I')
            {
                ++check;
                if (check == n)
                {
                    --check;
                    ++answer;
                }
                i += 2;
            }
            check = 0;
        }
    }
    cout << answer << '\n';

    return 0;
}