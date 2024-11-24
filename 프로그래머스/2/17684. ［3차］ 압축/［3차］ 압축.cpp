#include <string>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;

    unordered_map<string, int> index;
    for (int i = 0; i < 26; ++i)
        index[string(1, 'A' + i)] = i + 1;

    stack<char> st;
    for (int i = msg.length() - 1; i >= 0; --i)
        st.push(msg[i]);

    int nextNum = 27;
    string front = "";
    while (!st.empty())
    {
        front += st.top();
        st.pop();

        auto it1 = index.find(front);
        if (it1 == index.end())
        {
            index[front] = nextNum;
            ++nextNum;
            int length = front.length();
            string tmp1 = front.substr(0, length - 1);
            char tmp2 = front[length - 1];
            st.push(tmp2);
            answer.push_back(index[tmp1]);
            front = "";
        }
    }

    if (front != "")
        answer.push_back(index[front]);

    return answer;
}