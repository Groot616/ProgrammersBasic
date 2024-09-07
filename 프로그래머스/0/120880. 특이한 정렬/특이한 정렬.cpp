#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

bool compare(pair<int, int>& pair1, pair<int, int>& pair2)
{
    if(pair1.first == pair2.first)
        return pair1.second > pair2.second;
    else return pair1.first < pair2.first;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    
    vector<pair<int, int>> diffIdx;
    sort(numlist.begin(), numlist.end());
    for(int i=0; i<numlist.size(); ++i)
        diffIdx.push_back(make_pair(abs(numlist[i] - n), i));
    sort(diffIdx.begin(), diffIdx.end(), compare);
    
    for(const auto& e : diffIdx)
    {
        answer.push_back(numlist[e.second]);
    }
    
    /** 디버깅용 */
    cout << "diffIdx" << endl;;
    for(const auto& e : diffIdx)
        cout << "e.first : " << e.first << ", e.second : " << e.second << endl;
    cout << "numlist" << endl;;
    cout << "e : ";
    for(const auto& e : numlist)
        cout << e << ", ";
    cout << endl;
    /** 디버깅용 */
    
    return answer;
}