#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int test;
	
	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int answer = 0;
		int dimension;
		vector<int> d1;
		vector<int> d2;

		cin >> dimension;
		d1.resize(dimension);
		d2.resize(dimension);
		for (auto& x : d1) cin >> x;
		for (auto& x : d2) cin >> x;
		for (int j = 0; j < dimension; ++j)
			d1[j] != d2[j] ? answer += 1 : answer = answer;
		cout << answer << '\n';
		
		d1.clear();
		d2.clear();
	}

	return 0;
}