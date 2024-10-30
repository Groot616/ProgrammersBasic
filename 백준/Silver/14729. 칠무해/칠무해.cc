#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    map<double, int> studentGrade;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        double score;
        cin >> score;
        studentGrade[score]++;
    }
    
    int idx = 0;
    for (auto it = studentGrade.begin(); it != studentGrade.end(); ++it)
    {
        for (int i = 0; i < it->second; ++i)
        {
            printf("%.3f\n", it->first);
            //cout << it->first << '\n';
            ++idx;
            if (idx == 7)
            {
                return 0;
            }
        }
    }

    return 0;
}