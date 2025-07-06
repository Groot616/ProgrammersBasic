#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) -> unsigned char
              {return tolower(c);}
             );
    bool bIsSpace = true;
    transform(s.begin(), s.end(), s.begin(), [&bIsSpace](unsigned char c) -> unsigned char
              {
                  if(isspace(c))
                  {
                      bIsSpace = true;
                      return c;
                  }
                  else if(bIsSpace)
                  {
                      bIsSpace = false;
                      return toupper(c);
                  }
                  else
                      return c;
              });
    answer = s;
    
    return answer;
}