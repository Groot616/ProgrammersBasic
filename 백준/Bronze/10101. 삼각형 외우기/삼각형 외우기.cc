#include <iostream>
#include <set>

using namespace std;

int main()
{
    int angle1;
    int angle2;
    int angle3;
    int sum;
    set<int> angles;

    cin >> angle1;
    cin >> angle2;
    cin >> angle3;
    sum = angle1 + angle2 + angle3;

    angles.insert(angle1);
    angles.insert(angle2);
    angles.insert(angle3);

    if (sum != 180)
        cout << "Error" << "\n";
    else if (angle1 == 60 && angle2 == 60 && angle3 == 60)
        cout << "Equilateral" << "\n";
    else if (angles.size() == 2)
        cout << "Isosceles" << "\n";
    else if (angles.size() == 3)
        cout << "Scalene" << "\n";

    return 0;
}