#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector<long long>  arr;

    cin >> n;
    arr.resize(n);
    for (auto& x : arr) cin >> x;
    sort(arr.begin(), arr.end());

    for (const auto& e : arr)
        cout << e << " ";
    cout << '\n';

    return 0;
}