#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int train1, train2;
		vector<int> t1_line;
		vector<int> t2_line;

		cin >> train1 >> train2;
		t1_line.resize(train1);
		t2_line.resize(train2);
		for (auto& x : t1_line) cin >> x;
		for (auto& x : t2_line) cin >> x;
		int same = 0;
		for (int j = 0; j < t1_line.size(); ++j)
		{
			for (int k = 0; k < t2_line.size(); ++k)
			{
				if (t1_line[j] == t2_line[k])
					same += 1;
			}
		}
		cout << same;
		if (i != t - 1)
			cout << '\n';
		t1_line.clear();
		t2_line.clear();
	}

	return 0;
}