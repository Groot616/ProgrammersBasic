#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // 세 수a, b, c의 기하 평균sqrt(n1 * n2) 값이 주어졌을 때 세 수를 구하기
    // sqrt(a * b) = x
    // sqrt(a * c) = y
    // sqrt(b * c) = z
    // a * b = x^2, a * c = y^2, b * c = z^2
    // 


    double a, b, c;
    double x, y, z;

    cin >> a;
    cin >> b;
    cin >> c;

    double xy = pow(a, 2);
    double xz = pow(b, 2);
    double yz = pow(c, 2);

    cout << fixed;
    cout.precision(15);
    cout << sqrt(xy * xz * yz) / yz << '\n';
    cout << sqrt(xy * xz * yz) / xz << '\n';
    cout << sqrt(xy * xz * yz) / xy << '\n';

    return 0;
}