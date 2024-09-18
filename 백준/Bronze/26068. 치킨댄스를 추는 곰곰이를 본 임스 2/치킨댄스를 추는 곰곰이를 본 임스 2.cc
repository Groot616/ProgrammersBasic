#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test;
	string coupon;
	vector<string> d_day;

	cin >> test;
	int cnt = 0;
	for (int i = 0; i < test; ++i)
	{
		cin >> coupon;
		
		stringstream ss(coupon);
		string word = "";
		while (getline(ss, word, '-'))
			d_day.push_back(word);
		if (stoi(d_day[1]) <= 90)
			++cnt;
		d_day.clear();
	}
	cout << cnt << '\n';
	
	return 0;
}