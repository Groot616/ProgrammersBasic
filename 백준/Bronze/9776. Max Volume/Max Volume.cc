#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>

const double PI = 3.1415926535;

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<float> answer;
	
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;
		vector<string> audio;
		getline(cin, str);
		stringstream ss(str);
		string word = "";
		while (getline(ss, word, ' '))
			audio.push_back(word);

		if (audio[0] == "S")
			answer.push_back((4.0 / 3.0) * PI * pow(stof(audio[1]), 3));
		else if(audio[0] == "C")
			answer.push_back((1.0 / 3.0) * PI * pow(stof(audio[1]), 2) * stof(audio[2]));
		else
			answer.push_back(PI * pow(stof(audio[1]), 2) * stof(audio[2]));
		audio.clear();
	}
	cout << fixed;
	cout.precision(3);
	cout << *max_element(answer.begin(), answer.end()) << '\n';

	return 0;
}