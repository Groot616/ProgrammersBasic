#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int waist, neck, hit;
	vector<int> height;

	cin >> waist >> neck >> hit;
	height.resize(hit);
	for (auto& x : height) cin >> x;
	for (const auto& e : height)
	{
		if (e >= waist && e <= neck)
			answer += 1;
	}
	cout << answer << '\n';

	return 0;
}