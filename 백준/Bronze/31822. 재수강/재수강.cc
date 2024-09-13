#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string lec;
    int n;
    int answer = 0;

    cin >> lec;
    cin >> n;

    lec = lec.substr(0, 5);

    vector<string> element;
    for (int i = 0; i < n; ++i)
    {
        string tmp;
        cin >> tmp;
        element.push_back(tmp);
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (lec[j] == element[i][j])
                ++cnt;
        }
        if (cnt == 5)
            ++answer;
        cnt = 0;
    }
    cout << answer << "\n";

    return 0;
}