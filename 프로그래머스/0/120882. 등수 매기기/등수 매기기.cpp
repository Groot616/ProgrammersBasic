#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare1(pair<int, int>& pair1, pair<int, int>& pair2)
{
    if(pair1.first == pair2.first)
        return pair1.second < pair2.second;
    return pair1.first > pair2.first;
}
//bool compare2(pair<int, int>& pair1, pair<int, int>& pair2)
//{
//    // 두번째 요소에 대해 정렬
//    if(pair1.second != pair2.second)
//        return pair1.second < pair2.second;
//    return pair1.first < pair2.first;
//}

vector<int> solution(vector<vector<int>> score) {
    
    // 굳이 평균 안내도 됨(합으로 등수 매기기 가능)
    // 각 scroe의 합을 저장할 컨테이너 생성
    // 각 score의 idx를 저장할 컨테이너 생성
    // idx에 따라 등수를 매긴 후 다시 복구해야 하므로 score의 합과 idx가 묶인 컨테이너 필요vector<pair<int, int>>
    // 등수를 매기려면 내림차순 정렬이 필요
    // 정렬에 따라 등수 부여후(이때 점수가 같으면 같은 등수) 다시 원래대로 복구
    
    vector<pair<int, int>> sumIdx;
    for(int i=0; i<score.size(); ++i)
    {
        sumIdx.push_back(make_pair(score[i][0] + score[i][1], i));
    }
    sort(sumIdx.begin(), sumIdx.end(), compare1);
    
    // 등수를 매길 배열 하나 더 생성하고 vector<pair<int, int>> 첫번째 요소에 등수, 두번째 요소에 배열idx
    // 이때 등수 변수를 따로 생성하고 다음 배열과 비교후 점수가 같으면 등수 증가x
    vector<pair<int, int>> gradeIdx;
    gradeIdx.push_back(make_pair(1, sumIdx[0].second));
    int grade = 1;
    int sameGradeCnt = 0;
    for(int i=1; i<sumIdx.size() + 1; ++i)
    {
        // i = 2, grade = 2, samegradecnt +=1;
        if(sumIdx[i].first == sumIdx[i-1].first)
        {
            gradeIdx.push_back(make_pair(grade, sumIdx[i].second));
            ++sameGradeCnt;
        }
        else
        {
            ++grade;
            grade += sameGradeCnt;
            sameGradeCnt = 0;
            gradeIdx.push_back(make_pair(grade, sumIdx[i].second));
        }
    }
    // 완 //
    vector<int> answer(score.size());
    cout << score.size() << endl;
    for(int i=0; i<score.size(); ++i)
    {
        answer[gradeIdx[i].second] = gradeIdx[i].first;
        cout << "gradeIdx[i].second : " << gradeIdx[i].second << ", " << answer[gradeIdx[i].second] << endl;
    }
    cout << endl;
    
    
    /** 디버깅용 코드 */
    //cout << "sumIdx" << endl;
    //for(int i=0; i<score.size(); ++i)
    //    cout << sumIdx[i].first << " : " << sumIdx[i].second << endl;
    //cout << "**************************************" << endl;
    

    //cout << "gradeIdx" << endl;
    //for(int i=0; i<score.size(); ++i)
    //    cout << gradeIdx[i].first << " : " << gradeIdx[i].second << endl;
    
    
    //for(int i=0; i<answer.size(); ++i)
    //    cout << answer[i] << ", answer.size() : " << answer.size() << endl;
    //cout << endl;
    /** 디버깅용 코드 */
    
    return answer;
}