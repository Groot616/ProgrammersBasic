#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare1(pair<int, int>& a, pair<int ,int>& b)
{
    if(a.second == b.second) return a.first < b.first;
    else return a.first < b.first;
}

bool compare2(pair<int, int>& a, pair<int, int>& b)
{
    if(a.first == b.first) return a.second < b.second;
    else return a.second < b.second;
}

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    vector<pair<int, int>> arr;
    int idx1Max = 0;
    int idx2Max = 0;
    for(int i=0; i<sizes.size(); ++i)
        arr.push_back(make_pair(sizes[i][0], sizes[i][1]));
    for(auto& e : arr)
    {
        if(e.first > idx1Max) idx1Max = e.first;
        if(e.second > idx2Max) idx2Max = e.second;
    }
    int min;
    int max;
    if(idx1Max > idx2Max)
    {
        sort(arr.begin(), arr.end(), compare1);
        min = arr[0].first;
        max = arr[arr.size() - 1].first;
    }
    else
    {
        sort(arr.begin(), arr.end(), compare2);
        min = arr[0].second;
        max = arr[arr.size() - 1].second;
    }
    
    for(int i=0; i<arr.size(); ++i)
    {
        if(idx1Max > idx2Max)
        {
            if(arr[i].second >= min && arr[i].second <= max && arr[i].second > arr[i].first)
            {
                int tmp;
                tmp = arr[i].first;
                arr[i].first = arr[i].second;
                arr[i].second = tmp;
            }
        }
        else
        {
            if(arr[i].first >= min && arr[i].first <= max && arr[i].first > arr[i].second)
            {
                int tmp;
                tmp = arr[i].first;
                arr[i].first = arr[i].second;
                arr[i].second = tmp;
            }
        }
    }
    
    int bMax = 0;
    for(int i=0; i<arr.size(); ++i)
    {
        if(idx1Max > idx2Max)
        {
            if(arr[i].second > bMax)
            {
                bMax = arr[i].second;
            }
        }
        else
        {
            if(arr[i].first > bMax)
            {
                bMax = arr[i].first;
            }
        }
    }
    cout << arr[arr.size() - 1].first << " " << bMax << '\n';
    if(idx1Max > idx2Max)
        answer = arr[arr.size() - 1].first * bMax;
    else
        answer = arr[arr.size()-1].second * bMax;
    
    return answer;
}