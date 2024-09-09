#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    
    cin >> name;
    if (name == "NLCS")
        cout << "North London Collegiate School" << "\n";
    else if (name == "BHA")
        cout << "Branksome Hall Asia" << "\n";
    else if (name == "KIS")
        cout << "Korea International School" << "\n";
    else
        cout << "St. Johnsbury Academy" << "\n";

    return 0;
}