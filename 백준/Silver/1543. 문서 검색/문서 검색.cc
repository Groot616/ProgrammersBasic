#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	string document;
	string findStr;

	getline(cin, document);
	getline(cin, findStr);


	while (document.find(findStr) != string::npos)
	{
		auto it = document.find(findStr);
		document.replace(it, findStr.length(), 1, '.');
		++answer;
	}
	cout << answer << '\n';

	return 0;
}