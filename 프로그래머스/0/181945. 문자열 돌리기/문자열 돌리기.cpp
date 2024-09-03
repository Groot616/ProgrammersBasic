#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(const auto& e : str)
        cout << e << endl;
    
    return 0;
}