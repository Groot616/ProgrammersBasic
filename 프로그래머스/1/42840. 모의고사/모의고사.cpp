#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(const pair<int, int>& a, const pair<int, int>& b)
{
    if(a.first == b.first)
        return a.second < b.second;
    else
        return a.first > b.first;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> student1 = {1, 2, 3, 4, 5};
    vector<int> student2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> student3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> totalScore(3, 0);
    for(int i = 0; i < answers.size(); ++i)
    {
        if(answers[i] == student1[i % student1.size()])
            ++totalScore[0];
        if(answers[i] == student2[i % student2.size()])
            ++totalScore[1];
        if(answers[i] == student3[i % student3.size()])
            ++totalScore[2];
    }
    
    vector<pair<int, int>> studentIdx;
    for(int i = 0; i < 3; ++i)
        studentIdx.push_back(make_pair(totalScore[i], i + 1));
    sort(studentIdx.begin(), studentIdx.end(), Compare);
    
    int maxScore = max_element(studentIdx.begin(), studentIdx.end(),
                               [](const pair<int, int>& a, const pair<int, int>& b)
                               {
                                   return a.first < b.first;
                               })->first;
    for(int i =0; i < studentIdx.size(); ++i)
    {
        if(studentIdx[i].first == maxScore)
            answer.push_back(studentIdx[i].second);
    }
    
    return answer;
}