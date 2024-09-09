#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int bus;
    int subway;
    
    cin >> n >> bus >> subway;
    if (n <= subway)
    {
        if (bus > subway)
            cout << "Subway" << "\n";
        else if (bus == subway)
            cout << "Anything" << "\n";
        else
            cout << "Bus" << "\n";
    }
    else
    {
        cout << "Bus" << "\n";
    }

    return 0;
}