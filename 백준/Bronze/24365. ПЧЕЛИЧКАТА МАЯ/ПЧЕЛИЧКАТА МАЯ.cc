#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int flower1, flower2, flower3;
	vector<int> flower;
	int sum;

	cin >> flower1 >> flower2 >> flower3;
	flower.push_back(flower1);
	flower.push_back(flower2);
	flower.push_back(flower3);
	sum = flower1 + flower2 + flower3;

	int cnt = 0;
	cnt += sum / 3 - flower[0];
	flower[1] -= cnt;
	cnt += sum / 3 - flower[1];
	flower[2] -= cnt;

	cout << cnt << '\n';
	

	return 0;
}