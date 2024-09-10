#include <iostream>

using namespace std;

int main()
{
    float f1;
    float f2;

    while (cin >> f1 >> f2)
    {
        if (f1 > 0 && f2 > 0)
            cout << "Q1" << "\n";
        else if (f1 < 0 && f2 > 0)
            cout << "Q2" << "\n";
        else if (f1 < 0 && f2 < 0)
            cout << "Q3" << "\n";
        else if (f1 > 0 && f2 < 0)
            cout << "Q4" << "\n";
        else
            cout << "AXIS" << "\n";
    }

    return 0;
}