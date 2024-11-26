#include <iostream>
#include <vector>

using namespace std;

void makeMatrix(vector<vector<int>>& matrix)
{
	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < matrix[i].size(); ++j)
		{
			int n;
			cin >> n;
			matrix[i][j] = n;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, k;

	cin >> n >> m;
	vector<vector<int>> matrix1(n, vector<int>(m));
	makeMatrix(matrix1);

	cin >> m >> k;
	vector<vector<int>> matrix2(m, vector<int>(k));
	makeMatrix(matrix2);

	vector<vector<int>> answer(n, vector<int>(k));
	for (int i = 0; i < matrix1.size(); ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			for (int l = 0; l < matrix2.size(); ++l)
				answer[i][j] += matrix1[i][l] * matrix2[l][j];
		}
	}

	for (int i = 0; i < answer.size(); ++i)
	{
		for (int j = 0; j < answer[i].size(); ++j)
			cout << answer[i][j] << " ";
		cout << '\n';
	}

	return 0;
}