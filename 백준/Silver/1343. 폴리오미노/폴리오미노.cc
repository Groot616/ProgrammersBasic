#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string board;
    cin >> board;

    if (board.find(".") == string::npos)
    {
        if (board.length() % 4 == 2 || board.length() % 4 == 0)
        {
            for (int i = 0; i < board.length() / 4; ++i)
                board.replace(4 * i, 4, "AAAA");
            for (int i = 0; i < board.length() % 4 / 2; ++i)
                board.replace(4 * (board.length() / 4), 2, "BB");
            cout << board << '\n';
            return 0;
        }
        else
        {
            cout << "-1" << '\n';
            return 0;
        }
    }
    else
    {
        string word = "";
        vector<string> total;
        for (int i = 0; i < board.length(); ++i)
        {
            if (board[i] == 'X')
                word += 'X';
            else if (board[i] == '.')
            {
                if (word.length() != 0)
                {
                    total.push_back(word);
                    word = "";
                    total.push_back(".");
                }
                else
                    total.push_back(".");
            }

            if (i == board.length() - 1)
                total.push_back(word);
        }

        for (int i = 0; i < total.size(); ++i)
        {
            if (total[i] != ".")
            {
                if (total[i].length() % 4 == 2 || total[i].length() % 4 == 0)
                {
                    if (total[i].length() == 4) total[i] = "AAAA";
                    else if (total[i].length() == 2) total[i] = "BB"; 
                    else
                    {
                        for (int j = 0; j < total[i].length() / 4; ++j)
                            total[i].replace(4 * j, 4, "AAAA");
                        for (int j = 0; j < total[i].length() % 4 / 2; ++j)
                            total[i].replace(4 * (total[i].length() / 4), 2, "BB");
                    }
                }
                else
                {
                    cout << "-1" << '\n';
                    return 0;
                }
            }
        }
        for (const auto& e : total)
            cout << e;
        cout << '\n';
    }

    return 0;
}
