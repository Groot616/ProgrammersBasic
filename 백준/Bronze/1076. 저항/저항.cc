#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    const vector<pair<string, int>> resistance = {
        {"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}
    };

    string answer = "";
    int value = 0;
    string s1, s2, s3;

    cin >> s1;
    cin >> s2;
    cin >> s3;
    for (int i = 0; i < resistance.size(); ++i)
    {
        if (s1 == resistance[i].first)
        {
            value += 10 * resistance[i].second;
            break;
        }
    }
    for (int i = 0; i < resistance.size(); ++i)
    {
        if (s2 == resistance[i].first)
        {
            value += resistance[i].second;
            break;
        }
    }
    
    if (value == 0)
    {
        cout << "0" << '\n';
        return 0;
    }
    else
    {
        answer += to_string(value);
        for (int i = 0; i < resistance.size(); ++i)
        {
            if (s3 == resistance[i].first)
            {
                for (int j = 0; j < resistance[i].second; ++j)
                    answer += "0";
            }
        }
    }
    cout << answer << '\n';

    return 0;
}