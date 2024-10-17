#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n1, n2;
    
    cin >> n1 >> n2;
    long long minN = min(n1, n2);
    long long maxN = max(n1, n2);
    
    if (maxN > minN)
        cout << maxN - minN - 1 << '\n';
    else
        cout << "0" << '\n';
    if(maxN - minN != 1)
        for (long long i = minN + 1; i < maxN; ++i)
            cout << i << " ";

    return 0;
}