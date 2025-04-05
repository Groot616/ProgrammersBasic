#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void getWinner()
{
    // 현재 병사의 수
    int sejunSoldier;
    int sebiSoldier;
    cin >> sejunSoldier >> sebiSoldier;

    vector<int> sejunSoldierPower(sejunSoldier);
    vector<int> sebiSoldierPower(sebiSoldier);
    for (int& power : sejunSoldierPower) cin >> power;
    for (int& power : sebiSoldierPower)cin >> power;
    sort(sejunSoldierPower.begin(), sejunSoldierPower.end());
    sort(sebiSoldierPower.begin(), sebiSoldierPower.end());

    int sejunIdx = 0;
    int sebiIdx = 0;
    while (true)
    {
        if (sejunSoldier == 0 || sebiSoldier == 0)
            break;
        
        if (sejunSoldierPower[sejunIdx] == sebiSoldierPower[sebiIdx])
        {
            sebiIdx++;
            sebiSoldier--;

        }
        else if (sejunSoldierPower[sejunIdx] > sebiSoldierPower[sebiIdx])
        {
            sebiIdx++;
            sebiSoldier--;
        }
        else
        {
            sejunIdx++;
            sejunSoldier--;
        }
    }
    
    if (sebiSoldier == 0)
        cout << "S" << '\n';
    else if (sejunSoldier == 0 && sebiSoldier == 0)
        cout << "C" << '\n';
    else
        cout << "B" << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // 입력1 : 테스트케이스
    // 입력2 : 세준이 병사수
    // 입력3 : 세준이 병사 힘
    // 입력4 : 세비 병사수
    // 입력5 : 세비 병사 힘

    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; ++i)
        getWinner();

    return 0;
}
