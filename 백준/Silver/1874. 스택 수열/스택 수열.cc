#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 1. 숫자 입력시 현재 스택의 top 확인
	// 2. 입력된 숫자가 스택의 top보다 클 경우 스택 추가 및 + 출력(스택이 비어있는지 확인)
	// 3. 입력된 숫자가 스택의 top보다 작을 경우 스택 제거 및 - 출력(스택이 비어있는지 확인)
	// 4 3 6 8 7 5 2 1
	// 1 2 3 4 5 6 7 8
	// 1 2 3 4(push) , 4(pop) = + + + + -
	// 1 2 3 ,3(pop) = + + + + - -
	// 1 2 5 6(push), 6(pop) = + + + + - - + + -
	// 1 2 5 7 8(push), 8(pop) = + + + + - - + + - + + -
	// 1 2 5 7(pop) = + + + + - - + + - + + - -
	// 1 2 5(pop) = + + + + - - + + - + + - - -
	// 1 2(pop) = + + + + - - + + - + + - - - -
	// 1(pop) = + + + + - - + + - + + - - - - -
	
	vector<char> answer;
	int n;
	stack<int> st;
	vector<int> arr;
	vector<int> checkToPush;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	checkToPush = arr;
	sort(checkToPush.begin(), checkToPush.end());

	// arr : (4) (3) (6) 8 7 5 2 1
	// checkToPush : 1 2 (3) (4) 5 (6) 7 (8)

	int idx = 0;
	while (true)
	{
		if (st.empty())
		{
			for (int i = checkToPush[0]; i <= arr[idx]; ++i)
			{
				if (checkToPush[0] == arr[idx])
				{
					st.push(checkToPush[0]);
					checkToPush.erase(checkToPush.begin());
					answer.push_back('+');
					st.pop();
					answer.push_back('-');
				}
				else
				{
					st.push(checkToPush[0]);
					checkToPush.erase(checkToPush.begin());
					answer.push_back('+');
				}
			}
			++idx;
		}
		else
		{
			if (st.top() > arr[idx])
			{
				if (st.top() == arr[idx])
				{
					st.pop();
					answer.push_back('-');
					++idx;
				}
				else
				{
					cout << "NO" << '\n';
					return 0;
				}
			}
			else if (st.top() == arr[idx])
			{
				st.pop();
				answer.push_back('-');
				++idx;
			}
			else
			{
				for (int i = checkToPush[0]; i <= arr[idx]; ++i)
				{
					if (checkToPush[0] == arr[idx])
					{
						st.push(checkToPush[0]);
						checkToPush.erase(checkToPush.begin());
						answer.push_back('+');
						st.pop();
						answer.push_back('-');
					}
					else
					{
						st.push(checkToPush[0]);
						checkToPush.erase(checkToPush.begin());
						answer.push_back('+');
					}
				}
				++idx;
			}
		}
		if (idx == arr.size())
			break;
	}
	for (const auto& e : answer)
		cout << e << '\n';

	return 0;
}