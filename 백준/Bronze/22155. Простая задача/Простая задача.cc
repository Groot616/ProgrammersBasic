#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 조건문하나+반복문두개 or 조건문두개+반복문하나 넘게 쓰지 않으면 간단한 문제
	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int isIf;
		int isLoop;
		cin >> isIf >> isLoop;
		if (isIf <= 1 && isLoop <= 2 || isIf <= 2 && isLoop <= 1)
			cout << "Yes" << '\n';
		else
			cout << "No" << '\n';
	}

	
	return 0;
}