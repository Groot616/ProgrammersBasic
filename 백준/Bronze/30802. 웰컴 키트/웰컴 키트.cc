#include <iostream>
#include <vector>;

using namespace std;

int main()
{
	int N;
	int s, m, l, xl, xxl, xxxl;
	int shirtBundle, penBundle;
	int shirtAnswer = 0;
	int penBundleCnt = 0;
	int penCnt = 0;

	cin >> N;
	cin >> s >> m >> l >> xl >> xxl >> xxxl;
	cin >> shirtBundle >> penBundle;

	vector<int> sizeNum;
	sizeNum.push_back(s);
	sizeNum.push_back(m);
	sizeNum.push_back(l);
	sizeNum.push_back(xl);
	sizeNum.push_back(xxl);
	sizeNum.push_back(xxxl);

	for (int i = 0; i < sizeNum.size(); ++i)
    {
        if (sizeNum[i] > 0)
        {
            // 필요한 묶음 수 계산 (묶음으로 딱 맞지 않으면 한 묶음 더)
            shirtAnswer += (sizeNum[i] + shirtBundle - 1) / shirtBundle;
        }
    }

	penBundleCnt = N / penBundle;
	penCnt = N % penBundle;

	cout << shirtAnswer << endl;
	cout << penBundleCnt << " " << penCnt << endl;

	return 0;
}