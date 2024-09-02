#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (int i = 0; i < quiz.size(); ++i)
    {
        vector<string> element;
        stringstream ss(quiz[i]);
        string word;
        while (getline(ss, word, ' '))
        {
            element.push_back(word);
        }
        int result = stoi(element[4]);
        if (element[1] == "+")
        {
            if (stoi(element[0]) + stoi(element[2]) == stoi(element[4]))
                answer.push_back("O");
            else
                answer.push_back("X");
        }
        else
        {
            if (stoi(element[0]) - stoi(element[2]) == stoi(element[4]))
                answer.push_back("O");
            else
                answer.push_back("X");
        }
    }

    return answer;
}