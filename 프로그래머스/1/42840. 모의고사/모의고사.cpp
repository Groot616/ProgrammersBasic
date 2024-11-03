#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> score(3);
    vector<int> student1 = {1, 2, 3, 4, 5};
    vector<int> student2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> student3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    for(int i = 0; i < answers.size(); ++i)
    {
        if(answers[i] == student1[i % student1.size()])
            ++score[0];
        if(answers[i] == student2[i % student2.size()])
            ++score[1];
        if(answers[i] == student3[i % student3.size()])
            ++score[2];
    }
    
    int maxElement = *max_element(score.begin(), score.end());
    for(int i = 0; i < 3; ++i)
    {
        if(score[i] == maxElement)
            answer.push_back(i + 1);
    }
    
    return answer;
}