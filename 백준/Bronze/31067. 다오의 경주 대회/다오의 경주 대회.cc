#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	long long line, length;
	vector<long long> totalLine;
	vector<long long> copyLine;

	cin >> line >> length;
	totalLine.resize(line);

	for (auto& x : totalLine) cin >> x;
	for (int i = 1; i < totalLine.size(); ++i)
	{
		if (totalLine[i] <= totalLine[i - 1])
		{
			totalLine[i] += length;
			if (totalLine[i] <= totalLine[i - 1])
			{
				answer = -1;
				break;
			}
			answer += 1;
		}
	}
	cout << answer << '\n';

	return 0;
}