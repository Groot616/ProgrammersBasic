#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<bool> primeNum(1048576, true);

void makePrimeNum()
{
    for (int i = 2; i * i < primeNum.size(); ++i)
    {
        if (!primeNum[i])
            continue;
        for (int j = i * i; j < primeNum.size(); j += i)
            primeNum[j] = false;
    }
}

bool isPrimeLarge(const string& checkNum)
{
    long long num = 0;
    for (char c : checkNum)
        num = num * 10 + (c - '0');

    if (num < 2) return false;
    for (long long i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int solution(int n, int k)
{
    int answer = 0;

    primeNum[0] = false;
    primeNum[1] = false;
    makePrimeNum();

    stack<char> st;
    while (n != 0)
    {
        st.push((n % k) + '0');
        n /= k;
    }

    string checkNum = "";
    while (!st.empty())
    {
        char tmp = st.top();
        st.pop();
        if (tmp != '0')
            checkNum += tmp;
        else if (!checkNum.empty())
        {
            long long numLong = stoll(checkNum);
            if (numLong < primeNum.size())
            {
                if (primeNum[numLong])
                    ++answer;
            }
            else
            {
                if (isPrimeLarge(checkNum))
                    ++answer;
            }
            checkNum = "";
        }
    }

    if (!checkNum.empty())
    {
        long long numLong = stoll(checkNum);
        if (numLong < primeNum.size())
        {
            if (primeNum[numLong])
                ++answer;
        }
        else
        {
            if (isPrimeLarge(checkNum))
                ++answer;
        }
    }

    return answer;
}