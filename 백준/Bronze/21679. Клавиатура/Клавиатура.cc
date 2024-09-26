#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int inputCnt;

	cin >> n;
	vector<int> keyPressLimit(n);
	vector<int> keyInputCnt;

	for (int i = 0; i < n; ++i)
		cin >> keyPressLimit[i];

	cin >> inputCnt;
	keyInputCnt.resize(n, 0);
	for (int i = 0; i < inputCnt; ++i)
	{
		int input;

		cin >> input;
		keyInputCnt[input - 1]++;
	}

	for (int i = 0; i < n; ++i)
	{
		if (keyInputCnt[i] > keyPressLimit[i])
			cout << "yes" << '\n';
			
		else
			cout << "no" << '\n';
	}

	return 0;
}