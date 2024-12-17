#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;
    vector<vector<int>> price(n, vector<int>(3, 0));
    for (int i = 0; i < n; ++i)
        cin >> price[i][0] >> price[i][1] >> price[i][2];

    for (int i = 1; i < n; ++i)
    {
        price[i][0] += min(price[i - 1][1], price[i - 1][2]);
        price[i][1] += min(price[i - 1][0], price[i - 1][2]);
        price[i][2] += min(price[i - 1][0], price[i - 1][1]);
    }

    cout << *min_element(price[n - 1].begin(), price[n - 1].end());

    return 0;
}
