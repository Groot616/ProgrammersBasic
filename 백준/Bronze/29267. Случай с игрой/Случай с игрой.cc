#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// n : 행동수, k : 한 상자에 들어있는 탄약수
	// save : 현재 탄약 저장, load : 마지막으로 저장된 탄약 수 로드, shoot : 탄약 한발 소모, ammo : 한 상자를 선택해 k개의 탄약 추가
	// 저장전에 로드되면 탄약수 0으로 초기화
	int n, k;
	int save = 0;
	int current = 0;
	bool bIsSave = false;

	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		if (str == "save")
		{
			if(!bIsSave) bIsSave = true;
			save = current;
		}
		else if (str == "load")
		{
			if (bIsSave)
				current = save;
			else
				current = 0;
		}
		else if (str == "shoot")
		{
			if(current > 0)
				current -= 1;
		}
		else if (str == "ammo")
		{
			current += k;
		}
		cout << current << '\n';
	}

	return 0;
}