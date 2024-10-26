#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    vector<vector<int>> appleBox;
    appleBox.resize(score.size() / m);
    sort(score.rbegin(), score.rend());

    for(int i = 0; i< appleBox.size(); ++i)
        answer += score[((i * m) + (m - 1))] * m;
    
    return answer;
}