#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    double hour, min, sec;
    double zeroToHour, zeroToMin, zeroToSec;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> hour >> min >> sec;
        zeroToSec = 6 * sec;
        zeroToMin = 6 * min + sec / 10;
        zeroToHour = 30 * hour + min / 2 + sec / 120;

        double min1 = abs(zeroToSec - zeroToMin);
        min1 = std::min(min1, 360 - min1);
        double min2 = abs(zeroToSec - zeroToHour);
        min2 = std::min(min2, 360 - min2);
        double min3 = abs(zeroToMin - zeroToHour);
        min3 = std::min(min3, 360 - min3);
        vector<double> vec = { min1, min2, min3 };
        cout << fixed;
        cout.precision(6);
        cout << *min_element(vec.begin(), vec.end()) << '\n';
    }

    return 0;
}