#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<int> line;

	cin >> n;
	line.resize(n);
	line[0] = 1;
	for (int i = 1; i <= n - 1; ++i)
	{
		int between;
		cin >> between;
		line[1 + between] = i + 1;
	}
	for (const auto& e : line)
		cout << e << " ";
	cout << '\n';

	return 0;
}