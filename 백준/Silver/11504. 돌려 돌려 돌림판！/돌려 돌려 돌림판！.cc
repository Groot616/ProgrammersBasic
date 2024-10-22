#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int answer = 0;
		int n, length;
		string strX, strY;
		vector<string> nums;
		
		cin >> n >> length;
		nums.resize(n);
		for (int j = 0; j < length; ++j)
		{
			string x;
			cin >> x;
			strX += x;
		}
		for (int j = 0; j < length; ++j)
		{
			string y;
			cin >> y;
			strY += y;
		}
		for (auto& x : nums) cin >> x;

		for (int j = 0; j < n; ++j)
		{
			int idx = j;
			string strSum = "";
			while (true)
			{
				if (strSum.length() == length)
					break;

				if (idx > length - n)
				{
					strSum += nums[idx % n];
					++idx;
				}
				else if (idx <= length - n)
				{
					strSum += nums[idx];
					++idx;
				}
			}
			if (stoi(strSum) >= stoi(strX) && stoi(strSum) <= stoi(strY))
				++answer;
		}
		cout << answer << '\n';
	}

	return 0;
}