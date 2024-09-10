#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    vector<int> element;

    cin >> n >> m;
    int tmp;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        element.push_back(tmp);
    }

    int answer = 0;
    for (int i = 0; i < element.size() - 2; ++i)
    {
        for (int j = i + 1; j < element.size() - 1; ++j)
        {
            for (int k = j + 1; k < element.size(); ++k)
                if (element[i] + element[j] + element[k] <= m)
                {
                    int currentSum = element[i] + element[j] + element[k];
                    if (currentSum <= m && currentSum > answer)
                        answer = currentSum;
                }
        }
    }
    cout << answer << "\n";

    return 0;
}