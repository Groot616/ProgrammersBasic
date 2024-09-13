#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string year;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> year;

		int nowYear = stoi(year);
		int nextYear = nowYear + 1;

		string strNowYear = to_string(nowYear);

		string tmp = "";
		tmp += strNowYear[2];
		tmp += strNowYear[3];
		if (nextYear % stoi(tmp) == 0)
			cout << "Good" << "\n";
		else
			cout << "Bye" << "\n";
	}


	return 0;
}