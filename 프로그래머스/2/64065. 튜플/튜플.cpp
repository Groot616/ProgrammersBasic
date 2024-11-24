#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>

using namespace std;

void divideTuple(const string& s, vector<pair<int, string>>& sStr)
{
    string tmp = "";
    stringstream ss(s);
    string word = "";
    while (getline(ss, word, '}'))
    {
        while (true)
        {
            if (word[0] == '{' || word[0] == ',')
                word.erase(0, 1);
            else
                break;
        }
        sStr.emplace_back(word.length(), word);
    }
}

void divideStr(const vector<pair<int, string>>& sStr, vector<vector<int>>& nums)
{
    for (int i = 0; i < sStr.size(); ++i)
    {
        stringstream ss(sStr[i].second);
        string num = "";
        while (getline(ss, num, ','))
            nums[i].push_back(stoi(num));
    }
}

vector<int> solution(string s) {
    vector<int> answer;

    s.erase(s.begin());
    s.erase(s.end() - 1);
    vector<pair<int, string>> sStr;
    divideTuple(s, sStr);
    sort(sStr.begin(), sStr.end());

    vector<vector<int>> nums(sStr.size());
    divideStr(sStr, nums);
    if (nums.size() == 1)
    {
        for (int i = 0; i < nums[0].size(); ++i)
            answer.push_back(nums[0][i]);
    }
    else
    {
        queue<int> q;
        unordered_set<int> inserted;
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = 0; j < nums[i].size(); ++j)
            {
                if (q.empty())
                {
                    q.push(nums[i][j]);
                    inserted.insert(nums[i][j]);
                }
                else
                {
                    auto it = inserted.find(nums[i][j]);
                    if (it == inserted.end())
                    {
                        q.push(nums[i][j]);
                        inserted.insert(nums[i][j]);
                    }
                }
            }
        }
        while (!q.empty())
        {
            answer.push_back(q.front());
            q.pop();
        }
    }

    return answer;
}