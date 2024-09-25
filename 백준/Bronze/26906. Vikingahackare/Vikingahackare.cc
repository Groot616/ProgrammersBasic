#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	unordered_map<string, char> code;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;
		
		getline(cin, str);
		stringstream ss(str);
		string word, bit;
		ss >> word >> bit;
		code.insert(make_pair(bit, word[0]));
	}

	string myBit;
	cin >> myBit;
	for (int i = 0; i < myBit.length(); i += 4)
	{
		string str = "";
		str += str + myBit[i] + myBit[i + 1] + myBit[i + 2] + myBit[i + 3];
		auto it = code.find(str);
		if (it != code.end())
			cout << it->second;
		else
			cout << "?";
	}
	cout << '\n';

	return 0;
}