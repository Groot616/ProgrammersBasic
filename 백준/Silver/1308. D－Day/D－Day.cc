#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int monthSwitch(int month, bool leapYear)
{
	int totalDay = 0;

	switch (month)
	{
	case 1: totalDay += 31; break;
	case 2: totalDay += (leapYear ? 29 : 28); break;
	case 3: totalDay += 31; break;
	case 4: totalDay += 30; break;
	case 5: totalDay += 31; break;
	case 6: totalDay += 30; break;
	case 7:
	case 8: totalDay += 31; break;
	case 9: totalDay += 30; break;
	case 10: totalDay += 31; break;
	case 11: totalDay += 30; break;
	case 12: totalDay += 31; break;
	default: totalDay += 0; break;
	}
	return totalDay;
}

int checkEndDay(int month, int day, bool leapYear)
{
	int totalDay = day;

	for (int i = month - 1; i >= 1; --i)
		totalDay += monthSwitch(i, leapYear);

	return totalDay;
}

int checkStartDay(int month, int day, bool leapYear)
{
	int totalDay = monthSwitch(month, leapYear) - day;

	for (int i = month + 1; i <= 12; ++i)
		totalDay += monthSwitch(i, leapYear);

	return totalDay;
}

bool isLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int startYear, startMonth, startDay;
	int endYear, endMonth, endDay;

	cin >> startYear >> startMonth >> startDay;
	cin >> endYear >> endMonth >> endDay;

	if ((endYear - startYear > 1000) || (endYear - startYear == 1000 && endMonth > startMonth) || (endYear - startYear == 1000 && endMonth == startMonth && endDay >= startDay))
	{
		cout << "gg" << '\n';
		return 0;
	}
	else if (endYear == startYear)
	{
		int end = endDay;
		int start = startDay;
		for (int i = 1; i < endMonth; ++i)
			end += monthSwitch(i, isLeapYear(endYear));
		for (int i = 1; i < startMonth; ++i)
			start += monthSwitch(i, isLeapYear(startYear));

		answer = end - start;
	}
	else
	{
		bool isStartLeap = isLeapYear(startYear);
		bool isEndLeap = isLeapYear(endYear);
		answer += checkEndDay(endMonth, endDay, isStartLeap);
		answer += checkStartDay(startMonth, startDay, isEndLeap);
		for (int i = startYear + 1; i < endYear; ++i)
		{
			if (isLeapYear(i)) answer += 366;
			else answer += 365;
		}
	}
	cout << "D-" << answer << '\n';


	return 0;
}