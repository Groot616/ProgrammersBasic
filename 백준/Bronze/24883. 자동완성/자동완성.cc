#include <iostream>

using namespace std;

int main()
{
    char name;

    cin >> name;

    if (name == 'N' || name == 'n')
        cout << "Naver D2" << "\n";
    else
        cout << "Naver Whale" << "\n";
}