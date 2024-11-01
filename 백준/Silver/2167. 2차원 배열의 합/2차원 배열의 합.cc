#include <iostream>
#include <vector>

using namespace std;

void makeArea(int n, int m, vector<vector<int>>& area)
{
    
    area.resize(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int num;
            cin >> num;
            area[i].push_back(num);
        }
    }
}

void makeCoordi(int x1, int y1, int x2, int y2, vector<pair<int, int>>& coordi)
{
    coordi.push_back(make_pair(x1, y1));
    coordi.push_back(make_pair(x2, y2));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    int a, b, x, y;
    int test;
    vector<vector<int>> area;
    vector<pair<int, int>> coordi;

    cin >> n >> m;
    makeArea(n, m, area);

    cin >> test;
    for (int i = 0; i < test; ++i)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        makeCoordi(x1, y1, x2, y2, coordi);
    }

    for (int i = 0; i < coordi.size(); i += 2)
    {
        int answer = 0;
        for (int j = coordi[i].first - 1; j < coordi[i + 1].first; ++j)
        {
            for (int k = coordi[i].second - 1; k < coordi[i + 1].second; ++k)
            {
                answer += area[j][k];
            }
        }
        cout << answer << '\n';
    }

    return 0;
}