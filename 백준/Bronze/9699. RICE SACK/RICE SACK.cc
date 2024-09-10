#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> element;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            int tmp;
            cin >> tmp;
            element.push_back(tmp);
        }
        sort(element.begin(), element.end());

        int answer = element.back();
        cout << "Case #" << i + 1 << ": " << answer << "\n";
        element.clear();
    }

    return 0;
}