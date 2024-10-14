#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int answer = 0;
    int book, maxWeight;
    vector<int> bookWeight;

    cin >> book >> maxWeight;
    bookWeight.resize(book);
    for (auto& x : bookWeight) cin >> x;
    
    int nowWeight = 0;
    for (const auto& e : bookWeight)
    {
        nowWeight += e;
        if (nowWeight <= maxWeight)
            continue;
        else
        {
            ++answer;
            nowWeight = e;
        }
    }
    if (nowWeight != 0)
        ++answer;
    cout << answer << '\n';

    return 0;
}
