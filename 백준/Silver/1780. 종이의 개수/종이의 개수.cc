#include <iostream>
#include <vector>

using namespace std;

void cutPaper(vector<vector<int>> paper, vector<pair<int, int>>& cnt)
{
    int numInfo = paper[0][0];
    bool bCantDivide = false;
    for (int i = 0; i < paper.size(); ++i)
    {
        for (int j = 0; j < paper[i].size(); ++j)
        {
            if (numInfo != paper[i][j])
            {
                bCantDivide = true;
                break;
            }
        }
        if (bCantDivide)
            break;
    }

    if (bCantDivide)
    {
        for (int i = 0; i < 9; ++i)
        {
            vector<vector<int>> newPaper(paper.size() / 3, vector<int>(paper.size() / 3));
            for (int j = 0; j < paper.size() / 3; ++j)
            {
                for (int k = 0; k < paper.size() / 3; ++k)
                    newPaper[j][k] = paper[paper.size() / 3 * (i / 3) + j][paper.size() / 3 * (i % 3) + k];
            }
            cutPaper(newPaper, cnt);
        }
    }
    else
    {
        if (paper[0][0] == -1)
            cnt[0].second += 1;
        else if (paper[0][0] == 0)
            cnt[1].second += 1;
        else if (paper[0][0] == 1)
            cnt[2].second += 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector<vector<int>> paper;

    cin >> n;
    paper.resize(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int num;
            cin >> num;
            paper[i][j] = num;
        }
    }

    vector<pair<int, int>> cnt = { {-1, 0}, {0, 0}, {1, 0} };
    cutPaper(paper, cnt);
    for (int i = 0; i < cnt.size(); ++i)
        cout << cnt[i].second << '\n';

    return 0;
}