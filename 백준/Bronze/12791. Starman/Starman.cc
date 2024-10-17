#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<pair<int, string>> album = {
    {1967, "DavidBowie"}, {1969, "SpaceOddity"}, {1970, "TheManWhoSoldTheWorld"}, {1971, "HunkyDory"}, {1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"},
    {1973, "AladdinSane"}, {1973, "PinUps"}, {1974, "DiamondDogs"}, {1975, "YoungAmericans"}, {1976, "StationToStation"}, {1977, "Low"}, {1977, "Heroes"},
    {1979, "Lodger"}, {1980, "ScaryMonstersAndSuperCreeps"}, {1983, "LetsDance"}, {1984, "Tonight"}, {1987, "NeverLetMeDown"}, {1993, "BlackTieWhiteNoise"},
    {1995, "1.Outside"}, {1997, "Earthling"}, {1999, "Hours"}, {2002, "Heathen"}, {2003, "Reality"}, {2013, "TheNextDay"}, {2016, "BlackStar"}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int cnt = 0;
        int startYear, endYear;
        vector<pair<int, string>> answer;

        cin >> startYear >> endYear;
        for (int j = 0; j < album.size(); ++j)
        {
            if (album[j].first >= startYear && album[j].first <= endYear)
            {
                ++cnt;
                answer.push_back(make_pair(album[j].first, album[j].second));
            }
        }

        cout << cnt << '\n';
        for (const auto& e : answer)
            cout << e.first << " " << e.second << '\n';
    }

    return 0;
}
