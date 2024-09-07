#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    
    vector<string> element;
    stringstream ss(polynomial);
    string word = "";
    while(getline(ss, word, ' '))
    {
        if(word != "")
            element.push_back(word);
    }
    
    /** 디버깅용 */
    //cout << "========================" << endl;
    //cout << "문자열 분리 확인용" << endl;
    //for(const auto& e : element)
    //{
    //    if(e == "")
    //        cout << "EMPTY" << ",";
    //    cout << e << ",";
    //} 
    //cout << endl;
    //cout << "========================" << endl;
    /** 디버깅용 */
    
    int coefficient = 0;
    int constant = 0;
    for(int i=0; i<element.size(); ++i)
    {
        // 상수합
        if(element[i].find("x") == string::npos && element[i].find("+") == string::npos)
        {
            for(int j=element[i].length() - 1; j>=0; --j)
            {
                constant += (element[i][j] - '0') * pow(10, element[i].length() - 1 - j);
                //cout << "i : " << i << ", j : " << j << ", element[i][j] : " << element[i][j] << endl;
            }
        }
        
        // x가 존재한다면 x를 삭제하고 계수만 남도록
        if(element[i].find('x') != string::npos)
        {
            if(element[i].length() == 1)
                coefficient += 1;
            else
            {
                element[i].erase(remove(element[i].begin(), element[i].end(), 'x'), element[i].end());
                for(int j=element[i].length() - 1; j>=0; --j)
                {
                    coefficient += (element[i][j] - '0') * pow(10, element[i].length() - 1 - j);
                }
            }
        }
    }
    cout << "constant : " << constant << endl;
    cout << "coefficient : " << coefficient << endl;
    
    if(coefficient == 0)
    {
        answer = to_string(constant);
    }
    else if(coefficient == 1)
    {
        if(constant == 0)
        {
            answer = "x";
        }
        else
        {
            answer = "x + ";
            answer += to_string(constant);
        }
    }
    else
    {
        if(constant != 0)
        {
            answer = to_string(coefficient);
            answer += "x + ";
            answer += to_string(constant);
        }
        else
        {
            answer = to_string(coefficient);
            answer += "x";
        }
    }
    
    return answer;
}