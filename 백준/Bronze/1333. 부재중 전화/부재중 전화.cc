#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n, l, d;
	cin >> n >> l >> d;

	// 노래가 울릴 때의 타임라인
	vector<bool> timeLine;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < l; ++j)
			timeLine.push_back(true);
		if (i != n - 1)
		{
			for (int j = 0; j < 5; ++j)
				timeLine.push_back(false);
		}
	}

	// 벨이 울릴 때의 타임라인
	vector<bool> bellRing;
	for (int i = 0; i < ceil((double)timeLine.size() / d); ++i)
	{
		bellRing.push_back(true);
		for (int j = 0; j < d - 1; ++j)
			bellRing.push_back(false);
	}
	bellRing.push_back(true);

	// 디버깅용
	/*cout << "timeLineSize : " << timeLine.size() << ", bellRingSize : " << bellRing.size() << endl;
	for (const auto& e : timeLine)
		cout << e << " ";
	cout << endl;
	for (const auto& e : bellRing)
		cout << e << " ";
	cout << endl;*/

	/*for (int i = 0; i < bellRing.size() - timeLine.size(); ++i)
		timeLine.push_back(false);*/

	bool bFind = false;
	for (int i = 0; i < timeLine.size(); ++i)
	{
		if (timeLine[i] == false && bellRing[i] == true)
		{
			cout << i << endl;
			bFind = true;
			break;
		}
	}
	if (!bFind)
		cout << bellRing.size() - 1 << endl;
}