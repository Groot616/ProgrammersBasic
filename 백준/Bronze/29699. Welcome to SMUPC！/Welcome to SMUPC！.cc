#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N;
    vector<char> element = { 'W', 'e', 'l', 'c', 'o', 'm', 'e', 'T', 'o', 'S', 'M', 'U', 'P', 'C' };

    cin >> N;
    if (N % 14 != 0)
        cout << element[N % 14 - 1] << "\n";
    else
        cout << 'C' << "\n";

    return 0;
}