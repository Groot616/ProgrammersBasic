#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const vector<string> canUse = {"aya", "ye", "woo", "ma"};

void eraseStr(string &babbling)
{
    for(int i = 0; i < canUse.size(); ++i)
    {   
        while(babbling.find(canUse[i]) != string::npos)
        {
            if(babbling.find(canUse[i]) != string::npos)
                babbling.replace(babbling.find(canUse[i]), canUse[i].length(), to_string(i));
        }
    }
}

bool eraseNum(string babbling)
{
    bool retVal = true;
    for(int i = 0; i<babbling.length(); ++i)
    {
        if(babbling[i] < '0' || babbling[i] > '4')
        {
            retVal = false;
            break;
        }            
    }
    return retVal;
}

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(int i=0; i<babbling.size(); ++i)
    {
        eraseStr(babbling[i]);
        bool canSay = eraseNum(babbling[i]);
        if(!canSay)
            continue;
        else
        {
            if(babbling[i].length() == 1)
                ++answer;
            else
            {
                bool diff = true;
                for(int j = 1; j < babbling[i].length(); ++j)
                {
                    if(babbling[i][j] == babbling[i][j - 1])
                    {
                        diff = false;
                        break;
                    }
                }
                if(diff)
                    ++answer;
            }
        }
    }
    
    return answer;
}