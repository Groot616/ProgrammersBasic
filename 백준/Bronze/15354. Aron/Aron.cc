#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n;
	vector<char> line;

	cin >> n;
	line.resize(n);
	for (auto& x : line) cin >> x;
	for (int i = 1; i < n; ++i)
	{
		if (line[i] != line[i - 1])
			answer += 1;
	}
	cout << answer + 2 << '\n';

	return 0;
}