#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct dataInfo
{
    int code;
    int date;
    int maximum;
    int remain;

    dataInfo(int a, int b, int c, int d) : code(a), date(b), maximum(c), remain(d) {}
};

void makeStruct(const vector<pair<string, int>> sortData, const vector<vector<int>> data, const string ext, const int val_ext, vector<dataInfo>& totalData)
{
    for (int i = 0; i < sortData.size(); ++i)
    {
        if (sortData[i].first == ext)
        {
            for (int j = 0; j < data.size(); ++j)
            {
                if (data[j][sortData[i].second] < val_ext)
                    totalData.emplace_back(data[j][0], data[j][1], data[j][2], data[j][3]);
            }
        }
    }
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    const vector<pair<string, int>> sortData = { {"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3} };
    vector<dataInfo> totalData;
    makeStruct(sortData, data, ext, val_ext, totalData);

    auto compare = [sortData, sort_by](const dataInfo& a, const dataInfo& b)
        {
            for (int i = 0; i < sortData.size(); ++i)
            {
                if (sortData[i].first == sort_by)
                {
                    switch (sortData[i].second)
                    {
                    case 0:
                        return a.code < b.code;
                        break;
                    case 1:
                        return a.date < b.date;
                        break;
                    case 2:
                        return a.maximum < b.maximum;
                        break;
                    case 3:
                        return a.remain < b.remain;
                        break;
                    default:
                        break;
                    }
                }
            }
        };
    sort(totalData.begin(), totalData.end(), compare);
    answer.resize(totalData.size());
    for (int i = 0; i < totalData.size(); ++i)
        answer[i] = { totalData[i].code, totalData[i].date, totalData[i].maximum, totalData[i].remain };

    for(int i = 0; i < totalData.size(); ++i)
    {
        cout << totalData[i].code << " " << totalData[i].date << " " << totalData[i].maximum << " " << totalData[i].remain;
        cout << '\n';
    }
    return answer;
}