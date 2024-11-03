#include <string>
#include <vector>
#include <sstream>

using namespace std;

void toLower(string& new_id)
{
    for(int i = 0; i < new_id.length(); ++i)
    {
        if(new_id[i] >= 'A' && new_id[i] <= 'Z')
            new_id[i] = tolower(new_id[i]);
    }
}

void eraseUnnecessary(string& new_id)
{
    for(int i = 0; i < new_id.length(); ++i)
    {
        if((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9') || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
            continue;
        else
        {
            new_id.erase(i, 1);
            i -= 1;
        }
    }
}

void sumDot(string &new_id)
{
    string retStr = "";
    bool bFound = false;
    
    for(int i = 0; i < new_id.length(); ++i)
    {
        if(new_id[i] != '.')
        {
            retStr += new_id[i];
            bFound = false;
        }
        else
        {      
            if(!bFound)
            {
                bFound = true;
                retStr += new_id[i];
            }
        }
    }
    new_id = retStr;
}

void deleteFirstLastDot(string& new_id)
{
    if(new_id[0] == '.') new_id.erase(0, 1);
    if(new_id[new_id.length() - 1] == '.') new_id.erase(new_id.length() -1, 1);
}

void changeLength(string &new_id)
{
    if(new_id.length() <= 2)
    {
        int addLength = 3 - new_id.length();
        char lastAlpha = new_id[new_id.length() - 1];
        for(int i = 0; i < addLength; ++i)
            new_id += lastAlpha;
    }
    else if(new_id.length() >= 16)
    {
        new_id.erase(15, new_id.length() - 15);
        if(new_id[new_id.length() - 1] == '.')
            new_id.erase(new_id.length() - 1 , 1);
    }
}

string solution(string new_id) {
    string answer = "";
    
    toLower(new_id);
    eraseUnnecessary(new_id);
    sumDot(new_id);
    deleteFirstLastDot(new_id);
    if(new_id.empty())
        new_id += 'a';
    changeLength(new_id);
    
    answer = new_id;
    
    return answer;
}