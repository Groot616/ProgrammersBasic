#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> price;
    int A, P, C;
    
    cin >> A >> P >> C;
    price.push_back(A);
    price.push_back(P);
    price.push_back(C);

    if (price[0] + price[2] > price[1])
        cout << price[0] + price[2] << "\n";
    else
        cout << price[1] << "\n";
    
    return 0;
}