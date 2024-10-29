#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    for (int i = 0; i < targets.size(); ++i)
    {
        int totalPress = 0;
        for (int j = 0; j < targets[i].length(); ++j)
        {
            vector<int> idxPos;
            char findKey = targets[i][j];
            bool bFind = false;
            for (int k = 0; k < keymap.size(); ++k)
            {
                auto it = keymap[k].find(findKey);
                if (it != string::npos)
                {
                    idxPos.push_back(it + 1);
                    bFind = true;
                }
                else
                    idxPos.push_back(999);
            }
            if(!bFind)
            {
                totalPress = -1;
                break;
            }
            totalPress += *min_element(idxPos.begin(), idxPos.end());
        }
        answer.push_back(totalPress);
    }

    return answer;
}