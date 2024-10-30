#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string barcode;

    cin >> n;
    cin >> barcode;
    for (int i = 0; i < n; ++i)
    {
        if (barcode[i] >= 'A' && barcode[i] <= 'Z')
            barcode[i] = tolower(barcode[i]);
        else
            barcode[i] = toupper(barcode[i]);
    }
    cout << barcode << '\n';

    return 0;
}