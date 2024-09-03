#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(auto& e : str)
    {
        if(e >= 65 && e<= 90)
            e = tolower(e);
        else
            e = toupper(e);
    }
    
    cout << str;
    
    return 0;
}