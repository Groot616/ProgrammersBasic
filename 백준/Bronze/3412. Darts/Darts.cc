#include <iostream>
#include <vector>

using namespace std;

int checkScore(int distanceSquared) {
    vector<int> radiiSquared = { 400, 1600, 3600, 6400, 10000, 14400, 19600, 25600, 32400, 40000 };

    for (int i = 0; i < 10; ++i)
    {
        if (distanceSquared <= radiiSquared[i])
            return 10 - i;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int totalScore = 0;

        for (int j = 0; j < n; ++j)
        {
            int x, y;
            cin >> x >> y;

            int distanceSquared = x * x + y * y;
            totalScore += checkScore(distanceSquared);
        }
        cout << totalScore << '\n';
    }

    return 0;
}