#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    vector<string> say = {"aya", "ye", "woo", "ma"};
    int cnt = 0;
    for(auto& e : babbling)
    {
        for(int i=0; i<say.size(); ++i)
        {
            if(e.find(say[i]) != string::npos)
            {
                cout << "before erase : " << e << endl;
                e.replace(e.begin() + e.find(say[i]), e.begin() + e.find(say[i]) + say[i].length(), "**");
                //cout << "i : " << i << ", say[i] : " << say[i] << ", say[i].length() : " << say[i].length() << endl;
                //cout << "say[i] index : " << e.find(say[i]) << endl;
                cout << "after erase : " << e << endl;
                cout << "===================" << endl;
            }
        }
    }
    
    /** 디버깅용 */
    cout << "babbling 배열 확인용" << endl;
    for(const auto& e : babbling)
        cout << e << ", ";
    cout << endl;
    cout << "babbling.size() : " << babbling.size() << endl;
    cout << "===================" << endl;
    /** 디버깅용 */
    
    int tmp = 0;
    for(int i=0; i<babbling.size(); ++i)
    {
        for(int j=0; j<babbling[i].length(); ++j)
        {
            //cout << babbling[i].length() << endl;
            if(babbling[i][j] == '*')
                ++tmp;
        }
        if(tmp == babbling[i].length())
        {
            ++cnt;
            cout << "tmp : " << tmp << ", i : " << i << ", babbling.length() : " << babbling[i].length() << endl;
            cout << "cnt : " << cnt << endl;
            cout << "===================" << endl;
        }
        tmp = 0;
    }
        
    answer = cnt;
    
    for(const auto& e : babbling)
        cout << e << " ";
    cout << endl;
    
    return answer;
}