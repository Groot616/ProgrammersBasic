#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    cin.clear();

    if (str == "SONGDO")
        cout << "HIGHSCHOOL" << "\n";
    else if (str == "CODE")
        cout << "MASTER" << "\n";
    else if (str == "2023")
        cout << "0611" << "\n";
    else
        cout << "CONTEST" << "\n";

    return 0;
}