#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int noneAd, revenueAd, costAd;
        cin >> noneAd >> revenueAd >> costAd;
        if (noneAd < revenueAd - costAd)
            cout << "advertise" << "\n";
        else if (noneAd == revenueAd - costAd)
            cout << "does not matter" << "\n";
        else
            cout << "do not advertise" << "\n";
    }

    return 0;
}