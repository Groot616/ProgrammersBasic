#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n;
	vector<int> frames;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int n1, n2;
		cin >> n1 >> n2;
		frames.push_back(n1 * n2);
	}
	answer = *max_element(frames.begin(), frames.end());
	cout << answer << '\n';

	return 0;
}