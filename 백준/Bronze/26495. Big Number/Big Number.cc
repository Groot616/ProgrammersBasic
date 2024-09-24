#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string n;

	cin >> n;
	int idx = 0;
	while (idx != n.length())
	{
		if (n[idx] == '0')
		{
			cout << "0000" << '\n';
			cout << "0  0" << '\n';
			cout << "0  0" << '\n';
			cout << "0  0" << '\n';
			cout << "0000";
		}
		else if (n[idx] == '1')
		{
			cout << "   1" << '\n';
			cout << "   1" << '\n';
			cout << "   1" << '\n';
			cout << "   1" << '\n';
			cout << "   1";
		}
		else if (n[idx] == '2')
		{
			cout << "2222" << '\n';
			cout << "   2" << '\n';
			cout << "2222" << '\n';
			cout << '2' << '\n';
			cout << "2222";
		}
		else if (n[idx] == '3')
		{
			cout << "3333" << '\n';
			cout << "   3" << '\n';
			cout << "3333" << '\n';
			cout << "   3" << '\n';
			cout << "3333";
		}
		else if (n[idx] == '4')
		{
			cout << "4  4" << '\n';
			cout << "4  4" << '\n';
			cout << "4444" << '\n';
			cout << "   4" << '\n';
			cout << "   4";
		}
		else if (n[idx] == '5')
		{
			cout << "5555" << '\n';
			cout << '5' << '\n';
			cout << "5555" << '\n';
			cout << "   5" << '\n';
			cout << "5555";
		}
		else if (n[idx] == '6')
		{
			cout << "6666" << '\n';
			cout << '6' << '\n';
			cout << "6666" << '\n';
			cout << "6  6" << '\n';
			cout << "6666";
		}
		else if (n[idx] == '7')
		{
			cout << "7777" << '\n';
			cout << "   7" << '\n';
			cout << "   7" << '\n';
			cout << "   7" << '\n';
			cout << "   7";
		}
		else if (n[idx] == '8')
		{
			cout << "8888" << '\n';
			cout << "8  8" << '\n';
			cout << "8888" << '\n';
			cout << "8  8" << '\n';
			cout << "8888";
		}
		else if (n[idx] == '9')
		{
			cout << "9999" << '\n';
			cout << "9  9" << '\n';
			cout << "9999" << '\n';
			cout << "   9" << '\n';
			cout << "   9";
		}
		if (idx != n.length() - 1)
		{
			cout << '\n';
			cout << '\n';
		}
		idx += 1;
	}
	
	return 0;
}