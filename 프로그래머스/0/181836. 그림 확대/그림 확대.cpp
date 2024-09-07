#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    vector<string> newPicture;
    string tmp = "";
    for(int i=0; i<picture.size(); ++i)
    {
        for(int j=0; j<picture[i].size(); ++j)
        {
            for(int t=0; t<k; ++t)
            {
                tmp += picture[i][j];
            }
        }
        for(int l=0; l<k; ++l)
            newPicture.push_back(tmp);
        tmp = "";
    }
    for(const auto& e : tmp)
        cout << e << " ";
    
    answer = newPicture;
    
    return answer;
}