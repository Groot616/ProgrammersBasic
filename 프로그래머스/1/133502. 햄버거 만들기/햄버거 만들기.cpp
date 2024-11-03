#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    
    string findTarget = "";
    for (const auto e : ingredient)
    {
        findTarget += to_string(e);
        int length = findTarget.length();
        
        if (length >= 4)
        {
            int idx = length - 4;
            string tmp = findTarget.substr(idx);
            
            if (tmp == "1231")
            {
                findTarget = findTarget.substr(0, idx);
                ++answer;
            }
        }
    }
    return answer;
}