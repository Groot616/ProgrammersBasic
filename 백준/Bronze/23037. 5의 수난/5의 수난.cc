#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer = 0;
    string nums;

    cin >> nums;
    for (int i = 0; i < nums.length(); ++i)
        answer += (int)pow(nums[i] - '0', 5);
    cout << answer << '\n';

    return 0;
}