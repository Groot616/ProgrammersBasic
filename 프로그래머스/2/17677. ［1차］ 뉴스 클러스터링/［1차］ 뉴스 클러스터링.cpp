#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    unordered_map<string, int> str1Map;
    for(int i = 1; i < str1.length(); ++i)
    {
        if(((str1[i - 1] >= 'a' && str1[i - 1] <= 'z') || (str1[i - 1] >= 'A' && str1[i - 1] <= 'Z')) && ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')))
        {
            str1[i - 1] = tolower(str1[i - 1]);
            str1[i] = tolower(str1[i]);
            string tmp = "";
            tmp += str1[i - 1];
            tmp += str1[i];
            str1Map[tmp]++;
        }
    }
    
    unordered_map<string, int> str2Map;
    for(int i = 1; i < str2.length(); ++i)
    {
        if(((str2[i - 1] >= 'a' && str2[i - 1] <= 'z') || (str2[i - 1] >= 'A' && str2[i - 1] <= 'Z')) && ((str2[i] >= 'a' && str2[i] <= 'z') || (str2[i] >= 'A' && str2[i] <= 'Z')))
        {
            str2[i - 1] = tolower(str2[i - 1]);
            str2[i] = tolower(str2[i]);
            string tmp = "";
            tmp += str2[i - 1];
            tmp += str2[i];
            str2Map[tmp]++;
        }
    }
    
    unordered_map<string, int> unions;
    for(auto it = str1Map.begin(); it != str1Map.end(); ++it)
    {
        auto itFind = str2Map.find(it->first);
        if(itFind != str2Map.end())
            unions[it->first] = max(it->second, itFind->second);
        else
            unions[it->first] = it->second;
    }
    for(auto it = str2Map.begin(); it != str2Map.end(); ++it)
    {
        auto itFind = str1Map.find(it->first);
        if(itFind != str1Map.end())
            unions[it->first] = max(it->second, itFind->second);
        else
            unions[it->first] = it->second;
    }
    
    unordered_map<string, int> intersections;
    for(auto it = str1Map.begin(); it != str1Map.end(); ++it)
    {
        auto itFind = str2Map.find(it->first);
        if(itFind != str2Map.end())
            intersections[it->first] = min(it->second, itFind->second);
    }
    int unionsSize = 0;
    int intersectionsSize = 0;
    for(auto it = unions.begin(); it != unions.end(); ++it)
        unionsSize += it->second;
    for(auto it = intersections.begin(); it != intersections.end(); ++it)
        intersectionsSize += it->second;
    cout << unionsSize << ", " << intersectionsSize << '\n';
    if(unionsSize == intersectionsSize && unionsSize == 0)
        answer = 65536;
    else
        answer = intersectionsSize * 65536 / unionsSize;
    
    return answer;
}