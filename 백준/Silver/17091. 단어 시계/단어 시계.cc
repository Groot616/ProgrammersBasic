#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<pair<int, string>> numStr = {
    {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"},
    {10, "ten"}, {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"}, {15, "quarter"}, {16, "sixteen"},
    {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}, {20, "twenty"}
};

string findNumStr(int num, bool isMin) {
    if (!isMin)
        return numStr[num - 1].second;
    else
    {
        if (num == 0) return "";
        if (num == 30) return "half";
        if (num == 15 || num == 45) return numStr[num - 1].second;
        if (num <= 20) return numStr[num - 1].second;
        return "twenty " + numStr[num - 21].second;
    }
}

int main() {
    int hour, min;
    cin >> hour >> min;

    if (min == 0)
        cout << findNumStr(hour, false) << " o' clock" << '\n';
    else if (min <= 30)
    {
        if (min == 1)
            cout << findNumStr(min, true) << " minute past " << findNumStr(hour, false) << '\n';
        else if (min == 15 || min == 30)
            cout << findNumStr(min, true) << " past " << findNumStr(hour, false) << '\n';
        else
            cout << findNumStr(min, true) << " minutes past " << findNumStr(hour, false) << '\n';
    }
    else
    {
        if (min == 45 && min != 59)
            cout << findNumStr(15, true) << " to " << findNumStr((hour % 12) + 1, false) << '\n';
        else if(min == 59)
            cout << findNumStr(60 - min, true) << " minute to " << findNumStr((hour % 12) + 1, false) << '\n';
        else
            cout << findNumStr(60 - min, true) << " minutes to " << findNumStr((hour % 12) + 1, false) << '\n';
    }

    return 0;
}
