#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    unsigned long long tmp;
    
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> tmp;
        cout << tmp * tmp << '\n';
    }
    
    return 0;
}