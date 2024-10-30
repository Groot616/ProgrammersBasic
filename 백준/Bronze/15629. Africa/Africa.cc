#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    const vector<pair<string, int>> cost = {
        {"botswana", 0}, { "ethiopia", 50}, {"kenya", 50}, {"namibia", 140}, {"south-africa", 0}, {"tanzania", 50}, {"zambia", 50}, {"zimbabwe", 30}
    };

    int answer = 0;
    int n;
    vector<string> country;
    bool southAfrica = false;
    bool beforeZimbabwe = false;
    bool beforeZambia = false;

    cin >> n;
    country.resize(n);
    for (auto& x : country) cin >> x;
    for (int i = 0; i < country.size(); ++i)
    {
        if (country[i] == "botswana") answer += cost[0].second;
        else if (country[i] == "ethiopia") answer += cost[1].second;
        else if (country[i] == "kenya") answer += cost[2].second;
        else if (country[i] == "namibia")
        {
            if (southAfrica) answer += 40;
            else answer += cost[3].second;
        }
        else if (country[i] == "south-africa")
        {
            answer += cost[4].second;
            southAfrica = true;
        }
        else if (country[i] == "tanzania") answer += cost[5].second;
        else if (country[i] == "zambia")
        {
            if (beforeZambia) answer += 20;
            else answer += cost[6].second;
            beforeZambia = true;
        }
        else if (country[i] == "zimbabwe")
        {
            if (beforeZambia == true) answer += 0;
            else answer += cost[7].second;
            beforeZambia = true;
        }

        if (country[i] != "zimbabwe" && country[i] != "zambia")
        {
            beforeZambia = false;
            beforeZambia = false;
        }
    }
    cout << answer << '\n';

    return 0;
}