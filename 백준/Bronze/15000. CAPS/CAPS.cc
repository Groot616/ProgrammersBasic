#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str[0] >= 65 && str[0] <= 90)
        for(int i=0; i<str.length(); ++i)
            str[i] = tolower(str[i]);
    else
        for(int i=0; i<str.length(); ++i)
            str[i] = toupper(str[i]);
    cout << str << "\n";

    return 0;
}