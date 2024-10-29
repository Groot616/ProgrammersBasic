#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    vector<int> price;

    cin >> n >> m;
    price.resize(m);
    for (auto& x : price) cin >> x;
    sort(price.rbegin(), price.rend());

    int idx = 0;
    vector<int> vecBenefit;
    vector<int> vecPriceA;
    while (true)
    {
        if (idx == m || idx == n)
            break;

        int benefit = 0;
        int priceA = price[idx];
        vecPriceA.push_back(priceA);
        for (int i = 0; i < price.size(); ++i)
        {
            if (price[i] >= priceA)
            {
                benefit += priceA;
            }
        }
        vecBenefit.push_back(benefit);
        ++idx;
    }

    int maxIdx = 0;
    int maxPrice = 0;
    for (int i = 0; i < vecBenefit.size(); ++i)
    {
        if (vecBenefit[i] > maxPrice)
        {
            maxPrice = vecBenefit[i];
            maxIdx = i;
        }
    }
    cout << vecPriceA[maxIdx] << " " << maxPrice << '\n';

    return 0;
}