#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n;
    deque<int> card;

    cin >> n;
    for (int i = 1; i <= n; ++i)
        card.push_back(i);

    while (card.size() >= 1)
    {
        if (card.size() == 1)
            break;
        card.pop_front();
        int tmp = card.front();
        card.pop_front();
        card.push_back(tmp);
    }
    cout << card[0] << "\n";

    return 0;
}