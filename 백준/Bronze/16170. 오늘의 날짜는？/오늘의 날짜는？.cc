#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t timer;
    struct tm* t;
    timer = time(NULL);
    t = localtime(& timer);

    int nowYear = t->tm_year + 1900;
    int nowMonth = t->tm_mon + 1;
    int nowDay = t->tm_mday;
    int nowHour = t->tm_hour;
    
    bool dayChange = false;
    bool monthChange = false;
    bool yearChange = false;

    // 24 - 9 - 02 
    if (nowHour - 9 < 0)
    {
        nowHour = 24 - (9 - nowHour);
        dayChange = true;
    }

    if (dayChange)
    {
        nowDay -= 1;
        if (nowDay == 0)
            monthChange = true;
    }

    if (monthChange)
    {
        nowMonth -= 1;
        if (nowMonth == 0)
            yearChange = true;
    }

    if (yearChange)
        nowYear -= 1;

    cout << nowYear << "\n";
    cout << nowMonth << "\n";
    cout << nowDay << "\n";

    return 0;
}