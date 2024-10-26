#include <string>
#include <vector>

using namespace std;

int getTotalDay(int month)
{
    int day = 0;
    switch(month)
    {
        case 1: day = 31; break;
        case 2: day = 29; break;
        case 3: day = 31; break;
        case 4: day = 30; break;
        case 5: day = 31; break;
        case 6: day = 30; break;
        case 7:
        case 8: day = 31; break;
        case 9: day = 30; break;
        case 10: day = 31; break;
        case 11: day = 30; break;
        case 12: day = 31; break;
        default: break;
    }
    return day;
}

string getDay(int totalDay)
{
    string retStr = "";
    switch(totalDay)
    {
        case 0: retStr = "FRI"; break;
        case 1: retStr = "SAT"; break;
        case 2: retStr = "SUN"; break;
        case 3: retStr = "MON"; break;
        case 4: retStr = "TUE"; break;
        case 5: retStr = "WED"; break;
        case 6: retStr = "THU"; break;
        default: break;
    }
    return retStr;
}

string solution(int a, int b) {
    string answer = "";
    
    int totalDay = 0;
    if(a == 1)
    {
        totalDay = (b - 1) % 7;
        answer = getDay(totalDay);
    }
    else
    {
        for(int i = 1; i < a; ++i)
            totalDay += getTotalDay(i);
        totalDay += b - 1;
        totalDay %= 7;
        answer = getDay(totalDay);
    }
    
    return answer;
}