#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    string result = "";
    const vector<vector<char>> phone = {
        {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}, {'*', '0', '#'}
    };
    
    vector<pair<int, int>> handPos(2);
    handPos[0].first = 3; handPos[0].second = 0;
    handPos[1].first = 3; handPos[1].second = 2;
    for(int i = 0; i < numbers.size(); ++i)
    {
        char changeChar = numbers[i] + '0';
        if(changeChar == '1' || changeChar == '4' || changeChar == '7')
        {
            result += 'L';
            if(changeChar == '1')
            {
                handPos[0].first = 0;
                handPos[0].second = 0;
            }
            else if(changeChar == '4')
            {
                handPos[0].first = 1;
                handPos[0].second = 0;
            }
            else if(changeChar == '7')
            {
                handPos[0].first = 2;
                handPos[0].second = 0;
            }
        }
        else if(changeChar == '3' || changeChar == '6' || changeChar == '9')
        {
            result += 'R';
            if(changeChar == '3')
            {
                handPos[1].first = 0;
                handPos[1].second = 2;
            }
            else if(changeChar == '6')
            {
                handPos[1].first = 1;
                handPos[1].second = 2;
            }
            else if(changeChar == '9')
            {
                handPos[1].first = 2;
                handPos[1].second = 2;
            }
        }
        else if(changeChar == '2' || changeChar == '5' || changeChar == '8' || changeChar == '0')
        {
            if(changeChar == '2')
            {
                if(abs(handPos[0].first - 0) + abs(handPos[0].second - 1) < abs(handPos[1].first - 0) + abs(handPos[1].second - 1))
                {
                    result += 'L';
                    handPos[0].first = 0;
                    handPos[0].second = 1;
                }
                else if(abs(handPos[0].first - 0) + abs(handPos[0].second - 1) > abs(handPos[1].first - 0) + abs(handPos[1].second - 1))
                {
                    result += 'R';
                    handPos[1].first = 0;
                    handPos[1].second = 1;
                }
                else if(abs(handPos[0].first - 0) + abs(handPos[0].second - 1) == abs(handPos[1].first - 0) + abs(handPos[1].second - 1))
                {
                    if(hand == "left")
                    {
                        result += 'L';
                        handPos[0].first = 0;
                        handPos[0].second = 1;
                    }
                    else
                    {
                        result += 'R';
                        handPos[1].first = 0;
                        handPos[1].second = 1;
                    }
                }
            }
            if(changeChar == '5')
            {
                if(abs(handPos[0].first - 1) + abs(handPos[0].second - 1) < abs(handPos[1].first - 1) + abs(handPos[1].second - 1))
                {
                    result += 'L';
                    handPos[0].first = 1;
                    handPos[0].second = 1;
                }
                else if(abs(handPos[0].first - 1) + abs(handPos[0].second - 1) > abs(handPos[1].first - 1) + abs(handPos[1].second - 1))
                {
                    result += 'R';
                    handPos[1].first = 1;
                    handPos[1].second = 1;
                }
                else if(abs(handPos[0].first - 1) + abs(handPos[0].second -1) == abs(handPos[1].first - 1) + abs(handPos[1].second - 1))
                {
                    if(hand == "left")
                    {
                        result += 'L';
                        handPos[0].first = 1;
                        handPos[0].second = 1;
                    }
                    else
                    {
                        result += 'R';
                        handPos[1].first = 1;
                        handPos[1].second = 1;
                    }
                }
            }
            if(changeChar == '8')
            {
                if(abs(handPos[0].first - 2) + abs(handPos[0].second - 1) < abs(handPos[1].first - 2) + abs(handPos[1].second - 1))
                {
                    result += 'L';
                    handPos[0].first = 2;
                    handPos[0].second = 1;
                }
                else if(abs(handPos[0].first - 2) + abs(handPos[0].second - 1) > abs(handPos[1].first - 2) + abs(handPos[1].second - 1))
                {
                    result += 'R';
                    handPos[1].first = 2;
                    handPos[1].second = 1;
                }
                else if(abs(handPos[0].first - 2) + abs(handPos[0].second - 1) == abs(handPos[1].first - 2) + abs(handPos[1].second - 1))
                {
                    if(hand == "left")
                    {
                        result += 'L';
                        handPos[0].first = 2;
                        handPos[0].second = 1;
                    }
                    else
                    {
                        result += 'R';
                        handPos[1].first = 2;
                        handPos[1].second = 1;
                    }
                }
            }
            if(changeChar == '0')
            {
                if(abs(handPos[0].first - 3) + abs(handPos[0].second - 1) < abs(handPos[1].first - 3) + abs(handPos[1].second - 1))
                {
                    result += 'L';
                    handPos[0].first = 3;
                    handPos[0].second = 1;
                }
                else if(abs(handPos[0].first - 3) + abs(handPos[0].second - 1) > abs(handPos[1].first - 3) + abs(handPos[1].second - 1))
                {
                    result += 'R';
                    handPos[1].first = 3;
                    handPos[1].second = 1;
                }
                else if(abs(handPos[0].first - 3) + abs(handPos[0].second - 1) == abs(handPos[1].first - 3) + abs(handPos[1].second - 1))
                {
                    if(hand == "left")
                    {
                        result += 'L';
                        handPos[0].first = 3;
                        handPos[0].second = 1;
                    }
                    else
                    {
                        result += 'R';
                        handPos[1].first = 3;
                        handPos[1].second = 1;
                    }
                }
            }
        }
        cout << "left : " << handPos[0].first << ", " << handPos[0].second << '\n';
        cout << "right : " << handPos[1].first << ", " << handPos[1].second << '\n';
        cout << "======" << '\n';
    }
    answer = result;
    
    return answer;
}