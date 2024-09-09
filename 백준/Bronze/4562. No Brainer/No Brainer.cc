/*
NO BRAINS
MMM BRAINS
MMM BRAINS
*/
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int x;
    int y;
    
    cin >> n;
    vector<vector<int>> element(n, vector<int>(2));
    for(int i=0; i<element.size(); ++i)
    {
        cin >> x >> y;
        element[i][0] = x;
        element[i][1] = y;
    }
    for(const auto& e : element)
    {
        if(e[0] >= e[1])
            cout << "MMM BRAINS" << endl;
        else
            cout << "NO BRAINS" << endl;
    }
    
    return 0;
}