#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";

    // 로그인 시도시 아이디가 없다면 fail
    int pos = -1;
    for (int i = 0; i < db.size(); ++i)
    {
        if (id_pw[0] == db[i][0])
        {
            pos = i;
        }
    }
    if(pos == -1)
    {
        answer = "fail";
        return answer;
    }
    
    if (id_pw[1] != db[pos][1])
    {
        answer = "wrong pw";
    }
    else
    {
        answer = "login";
    }
    // 비밀번호 시도시 없다면 wrong pw, 동일하다면 login

    return answer;
}

int main()
{
    // solution({ "abc04", "345" }, { {"abc04", "335"}, {"abc03", "345"} });
    solution({ "meosseugi", "1234" }, { {"rardss", "123"}, {"yyoom", "1234"} ,{"meosseugi", "1234"} });
    return 0;
}