#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	vector<int> head;
	vector<int> body;

	cin >> n >> k;
	head.resize(n);
	body.resize(k);
	for (auto& x : head) cin >> x;
	for (auto& x : body) cin >> x;
	sort(head.rbegin(), head.rend());
	sort(body.rbegin(), body.rend());
	cout << head[0] + body[0] << '\n';

	return 0;
}