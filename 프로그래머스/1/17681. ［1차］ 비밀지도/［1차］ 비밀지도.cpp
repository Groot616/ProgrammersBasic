#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string changeBin(int n, const int size)
{
    string retStr = "";
    while(n != 0)
    {
        retStr += to_string(n % 2);
        n /= 2;
    }
    reverse(retStr.begin(), retStr.end());
    if(retStr.length() != size)
    {
        int needZero = size - retStr.length();
        for(int i=0; i<needZero; ++i)
            retStr = "0" + retStr;
    }
    return retStr;
}

vector<string> sumOfMap(const vector<pair<int, int>> lineNum, const int size)
{
    vector<string> retVec;
    for(int i=0; i<lineNum.size(); ++i)
    {
        string line1 = changeBin(lineNum[i].first, size);
        string line2 = changeBin(lineNum[i].second, size);
        string sumLine = "";
        for(int j=0; j<size; ++j)
        {
            if(line1[j] == '1' || line2[j] == '1')
                sumLine += "#";
            else
                sumLine += " ";
        }
        retVec.push_back(sumLine);
    }
    return retVec;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    vector<pair<int, int>> lineNum;
    
    for(int i=0; i<n; ++i)
        lineNum.push_back(make_pair(arr1[i], arr2[i]));
    answer = sumOfMap(lineNum, n);
    
    return answer;
}