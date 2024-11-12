#include <vector>
#include <iostream>

using namespace std;

vector<long long> tile;
int whiteTile = 0;
int blueTile = 0;

void makeField(vector<vector<int>>& field, int n)
{
    field.resize(n);
    for (int i = 0; i < n; ++i)
        field[i].resize(n);

    for (int i = 0; i < n; ++i)
        for (auto& x : field[i]) cin >> x;
}

void makeDividedField(vector<vector<int>>& dividedField, const vector<vector<int>> field, int n)
{
    dividedField.resize(n);
    for (int i = 0; i < n; ++i)
        dividedField[i].resize(n);
}

int dp(vector<vector<int>> field, int n)
{
    int totalCnt = 0;
    int zeroCnt = 0;
    int oneCnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (field[i][j] == 0) ++zeroCnt;
            else ++oneCnt;
        }
    }

    if (zeroCnt != n * n && oneCnt != n * n && n / 2 != 0)
    {
        vector<vector<int>> dividedField;
        dividedField.resize(n / 2);
        for (int i = 0; i < dividedField.size(); ++i)
            dividedField[i].resize(n / 2);

        for (int i = 0; i < n / 2; ++i)
        {
            for (int j = 0; j < n / 2; ++j)
                dividedField[i][j] = field[i][j];
        }
        totalCnt += dp(dividedField, n / 2);

        for (int i = n / 2; i < n; ++i)
        {
            for (int j = 0; j < n / 2; ++j)
                dividedField[i - n / 2][j] = field[i][j];
        }
        totalCnt += dp(dividedField, n / 2);

        for (int i = 0; i < n / 2; ++i)
        {
            for (int j = n / 2; j < n; ++j)
                dividedField[i][j - n / 2] = field[i][j];
        }
        totalCnt += dp(dividedField, n / 2);

        for (int i = n / 2; i < n; ++i)
        {
            for (int j = n / 2; j < n; ++j)
                dividedField[i - n / 2][j - n / 2] = field[i][j];
        }
        totalCnt += dp(dividedField, n / 2);
    }
    else
    {
        if (zeroCnt == n * n)
            ++whiteTile;
        else
            ++blueTile;
    }
    return totalCnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer = 0;
    int n;
    vector<vector<int>> field;

    cin >> n;
    makeField(field, n);

    dp(field, n);
    cout << whiteTile << '\n' << blueTile << '\n';

    return 0;
}

