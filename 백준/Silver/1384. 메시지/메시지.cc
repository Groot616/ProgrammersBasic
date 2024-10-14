#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct rollPaper
{
    string name;
    vector<string> PN;
};

vector<rollPaper> makeRollPaper(int total)
{
    vector<rollPaper> result(total);
    string paper;
    for (int i = 0; i < total; ++i)
    {
        getline(cin, paper);
        stringstream ss(paper);
        string name;
        while (getline(ss, name, ' '))
        {
            if (name != "P" && name != "N")
                result[i].name = name;
            else
                result[i].PN.push_back(name);
        }
    }

    return result;
}

vector<pair<string, string>> findBadGuy(vector<rollPaper> result)
{
    vector<pair<string, string>> instiVic;

    for (int i = 0; i < result.size(); ++i)
    {
        string victim = "";
        string instigator = "";
        for (int j = 0; j < result[i].PN.size(); ++j)
        {
            if (result[i].PN[j] == "N")
            {
                victim = result[i].name;
                break;
            }
        }

        if (victim != "")
        {
            for (int j = 0; j < result[i].PN.size(); ++j)
            {
                if (result[i].PN[j] == "N")
                    instiVic.push_back(make_pair(result[(i + result.size() - 1 - j) % result.size()].name, result[i].name));
            }
        }
    }
    
    return instiVic;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    int group = 1;
    while (true)
    {
        cin >> n;
        cin.ignore();
        if (n == 0)
            break;

        vector<rollPaper> result = makeRollPaper(n);
        
        vector<pair<string, string>> answer = findBadGuy(result);
        if (answer.size() == 0)
        {
            cout << "Group " << group << '\n';
            cout << "Nobody was nasty" << '\n';
        }
        else
        {
            cout << "Group " << group << '\n';
            for (int i = 0; i < answer.size(); ++i)
                cout << answer[i].first << " was nasty about " << answer[i].second << '\n';
        }
        cout << '\n';
        ++group;
    }

    return 0;
}