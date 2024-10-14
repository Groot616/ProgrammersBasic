#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		long long food = 0;
		long long day = 1;
		long long nowFood = 0;
		vector<long long> pigEat(6);
		vector<long long> nextdayPigEat(6);

		cin >> food;
		for (auto& x : pigEat) cin >> x;

		while (true)
		{
			nowFood = food;
			nowFood -= accumulate(pigEat.begin(), pigEat.end(), 0LL);
			if (nowFood < 0)
				break;

			for (int i = 0; i < 6; ++i)
			{
				int left = (i + 5) % 6;
				int right = (i + 1) % 6;
				int next = (i + 3) % 6;
				nextdayPigEat[i] = pigEat[i] + pigEat[left] + pigEat[right] + pigEat[next];
			}
			pigEat = nextdayPigEat;
			++day;
		}
		cout << day << '\n';
	}

	return 0;
}