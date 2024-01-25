#include<iostream>
#include<stdexcept>
#include<iomanip>
using namespace std;

class DateAndTime
{
private:
	unsigned hour, minute, second, year, month, day;

	// bool 函数来判断时间是否在正确的区间内
	bool checkInput(unsigned y, unsigned mo, unsigned d, unsigned h, unsigned mi, unsigned s)
	{
		if ((mo == 0) || (mo >= 13) || (d == 0) || (d >= 32) || (h >= 24) || (mi >= 60) || (s >= 60))
			return false;
		else
			return true;
	}

public:

	// 构造器，输入年月日及小时分钟秒
	DateAndTime(unsigned currentyear = 2021, unsigned currentmonth = 1, unsigned currentday = 1, unsigned currenthour = 0, unsigned currentminute = 0, unsigned currentsecond = 0)
	{
		setDateAndTime(currentyear, currentmonth, currentday, currenthour, currentminute, currentsecond);
	}

	void printUniversal() const
	{
		cout << setfill('0') << setw(4) << year << " " << setw(2) << month << " " << setw(2) << day << " "
			<< setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
	}

	void printStandard() const
	{
		bool ifAM = 1;
		unsigned hourS = hour;

		if (hour >= 12)
		{
			hourS -= 12; ifAM = 0;
		}

		cout << setfill('0') << setw(4) << year << " " << setw(2) << month << " " << setw(2) << day << " "
			<< setw(2) << hourS << ":" << setw(2) << minute << ":" << setw(2) << second << (ifAM ? " AM" : " PM") << endl;
	}

	void setDateAndTime(unsigned currentyear, unsigned currentmonth, unsigned currentday, unsigned currenthour, unsigned currentminute, unsigned currentsecond)
	{
		if (checkInput(currentyear, currentmonth, currentday, currenthour, currentminute, currentsecond))
		{
			hour = currenthour; minute = currentminute; second = currentsecond; year = currentyear; month = currentmonth; day = currentday;
		}
		else
			throw invalid_argument("The input is not in the correct form!");
	}

	void tick() {
		second++;
		if (second == 60) {
			minute++; second = 0;
			if (minute == 60) {
				hour++; minute = 0;
				if (hour == 24) {
					hour = 0; nextDay();
				}
			}
		}

	}

	void nextDay() {
		day++;
		if (day == 32) {
			month++; day = 1;
			if (month == 13) {
				year++; month = 1;
			}
		}

	}
};

int main()
{
	DateAndTime t(2022, 3, 19, 21, 38);
	t.printUniversal();
	t.printStandard();

	try
	{
		t.setDateAndTime(2022, 3, 50, 23, 59, 30);
	}
	catch (invalid_argument& e)
	{
		cout << "Exception: " << e.what() << endl;
	}

	for (int i = 1; i <= 60; i++)
	{
		t.tick();
	}

	t.printUniversal();
	t.printStandard();
}