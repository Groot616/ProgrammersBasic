#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct privacyInfo
{
    int year;
    int month;
    int day;
    char terms;
    
    privacyInfo(int a, int b, int c, char d) : year(a), month(b), day(c), terms(d) {}
};

void changeToday(string today, vector<int>& vecToday)
{
    stringstream ss(today);
    string num;
    while(getline(ss, num, '.'))
        vecToday.push_back(stoi(num));
}

void changeTerms(vector<string> terms, vector<pair<char, int>> &vecTerms)
{
    for(int i = 0; i < terms.size(); ++i)
    {
        stringstream ss(terms[i]);
        char alpha;
        int month;
        ss >> alpha >> month;
        vecTerms.push_back(make_pair(alpha, month));
    }
}

void changeInfo(vector<string> privacies, vector<privacyInfo>& info)
{
    for(int i = 0; i < privacies.size(); ++i)
    {
        stringstream ss(privacies[i]);
        string dateInfo;
        char terms;
        ss >> dateInfo >> terms;
        
        stringstream sss(dateInfo);
        vector<int> nums;
        string num;
        while(getline(sss, num, '.'))
            nums.push_back(stoi(num));

        privacyInfo customerInfo = {nums[0], nums[1], nums[2], terms};
        info.push_back(customerInfo);
    }
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    vector<int> vecToday;
    changeToday(today, vecToday);
    
    vector<pair<char, int>> vecTerms;
    changeTerms(terms, vecTerms);
    
    vector<privacyInfo> info;
    changeInfo(privacies, info);
    
    for(int i = 0; i < info.size(); ++i)
    {
        bool bFound = false;
        for(int j = 0; j < vecTerms.size(); ++j)
        {
            if(info[i].terms == vecTerms[j].first)
            {
                bFound = true;
                info[i].month += vecTerms[j].second;
                info[i].day -= 1;
                if(info[i].day == 0)
                {
                    info[i].day = 28;
                    info[i].month -= 1;
                }
                if(info[i].month > 12)
                {
                    info[i].year += info[i].month / 12;
                    info[i].month %= 12;
                }
                if(info[i].month == 0)
                {
                    info[i].month = 12;
                    --info[i].year;
                }
            }
            if(bFound)
                break;
        }
        if(vecToday[0] > info[i].year)
            answer.push_back(i + 1);
        else if(vecToday[0] == info[i].year && vecToday[1] > info[i].month)
            answer.push_back(i + 1);
        else if(vecToday[0] == info[i].year && vecToday[1] == info[i].month && vecToday[2] > info[i].day)
            answer.push_back(i + 1);
        else
            continue;
    }
    
    return answer;
}