#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    long long answer = 0;

    for (int i = 1; i <= n / 3; ++i)
    {
        int last = n - i;

        for (int j = i; j <= last / 2; ++j)
        {
            int third = last - j;

            if (i + j > third && i + third > j && j + third > i)
                if (i <= j && j <= third)
                    answer++;
        }
    }
    cout << answer << '\n';

    return 0;
}
