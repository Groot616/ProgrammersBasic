#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> answer(41, make_pair(-1, -1));

pair<int, int> fibonacci(int n)
{
	if (answer[n].first != -1 && answer[n].second != -1)
		return { answer[n].first , answer[n].second };

	if (n == 0)
		return answer[0];
	else if (n == 1)
		return answer[1];
	else
	{
		answer[n].first = 0;
		answer[n].second = 0;
		answer[n].first += fibonacci(n - 1).first + fibonacci(n - 2).first;
		answer[n].second += fibonacci(n - 1).second + fibonacci(n - 2).second;
		return answer[n];
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	
	answer[0] = {1, 0};
	answer[1] = {0, 1};
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int num;

		cin >> num;
		pair<int, int> answer = fibonacci(num);
		cout << answer.first << " " << answer.second << '\n';
	}

	return 0;
}