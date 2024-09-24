#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n;
	int a, d, g;
	vector<int> score;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> d >> g;
		if (a == d + g)
			answer = 2 * a * (d + g);
		else
			answer = a * (d + g);
		score.push_back(answer);
	}
	answer = *max_element(score.begin(), score.end());
	cout << answer << '\n';
	
	return 0;
}