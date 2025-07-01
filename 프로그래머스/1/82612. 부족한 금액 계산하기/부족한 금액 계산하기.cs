using System;

class Solution
{
    public long solution(int price, int money, int count)
    {
        long totalCash = 0;
        for(int i = 1; i <= count; ++i)
            totalCash += i * price;
        if(totalCash >= money)
            return Math.Abs(money - totalCash);
        else
            return 0;
        
        return -1;
    }
}