using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    
    long long allPrice = price;
    int add = price;
    
    for(int i=2; i<=count; ++i)
    {
        price += add;
        allPrice += price;
    }
    if(money - allPrice >= 0)
        answer = 0;
    else
        answer = allPrice - money;
    
    return answer;
}