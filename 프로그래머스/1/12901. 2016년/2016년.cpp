#include <string>
#include <vector>
#include <iostream>

using namespace std;

const vector<vector<int>> dayPerMonth = {{1, 31}, {2, 29}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};

string solution(int a, int b) {
    string answer = "";
    
    int totalDay = 0;
    totalDay += b;
    for(int i = 0; i < a - 1; ++i)
        totalDay += dayPerMonth[i][1];
    
    int lastDay = totalDay % 7;
    switch(lastDay)
    {
        case 0:
            answer = "THU";
            break;
        case 1:
            answer = "FRI";
            break;
        case 2:
            answer = "SAT";
            break;
        case 3:
            answer = "SUN";
            break;
        case 4:
            answer = "MON";
            break;
        case 5:
            answer = "TUE";
            break;
        case 6:
            answer = "WED";
            break;
        default:
            answer = "ERROR";
            break;
    }
    
    return answer;
}