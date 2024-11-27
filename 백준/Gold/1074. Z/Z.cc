#include <iostream>
#include <cmath>

using namespace std;

int recursion(int startY, int startX, int size, int cnt, int r, int c) {
    if (size == 2)
    {
        if (startY == r && startX == c) return cnt;
        if (startY == r && startX + 1 == c) return cnt + 1;
        if (startY + 1 == r && startX == c) return cnt + 2;
        if (startY + 1 == r && startX + 1 == c) return cnt + 3;
    }
    else
    {
        int half = size / 2;
        // 왼쪽위
        if (r < startY + half && c < startX + half)
            return recursion(startY, startX, half, cnt, r, c);
        // 오른쪽위
        else if (r < startY + half && c >= startX + half)
            return recursion(startY, startX + half, half, cnt + half * half, r, c);
        // 왼쪽아래
        else if (r >= startY + half && c < startX + half)
            return recursion(startY + half, startX, half, cnt + 2 * half * half, r, c);
        // 오른쪽아래
        else
            return recursion(startY + half, startX + half, half, cnt + 3 * half * half, r, c);
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, r, c;
    cin >> n >> r >> c;

    int size = (int)pow(2, n);
    cout << recursion(0, 0, size, 0, r, c) << '\n';

    return 0;
}
