#include <iostream>

using namespace std;

int main()
{
    char club;

    cin >> club;

    if (club == 'M')
        cout << "MatKor" << "\n";
    else if (club == 'W')
        cout << "WiCys" << "\n";
    else if (club == 'C')
        cout << "CyKor" << "\n";
    else if (club == 'A')
        cout << "AlKor" << "\n";
    else
        cout << "$clear" << "\n";
    
    return 0;
}