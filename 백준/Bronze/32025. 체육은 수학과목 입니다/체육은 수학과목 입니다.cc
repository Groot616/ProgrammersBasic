#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> space(2);
    
    cin >> space[0];
    cin >> space[1];

    double min = *min_element(space.begin(), space.end());

    cout << fixed;
    cout.precision(0);
    cout << min / 2 * 100 << "\n";
    
    return 0;
}