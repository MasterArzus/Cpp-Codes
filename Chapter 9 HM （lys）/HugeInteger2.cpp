#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int digit41 = 0;

class HugeInteger
{
public:
	HugeInteger(int a[40])
	{
		input(a);
	}
	void input(int a[40])
	{
		for (int i = 0;i <= 39;++i)
				integers[i] = a[i];
	}
	void output() const
	{
		for (int i = 0;i <= 39;++i)
			cout << integers[i];
	}
	static HugeInteger add(HugeInteger a,HugeInteger b)
	{
		int sum[41]{};
		for (int i = 39;i >= 0;--i)
			sum[i] = a.integers[i] + b.integers[i];
		for (int i = 39;i >= 0;--i)
		{
			if (sum[i] >= 10)
			{
				sum[i] -= 10;
				if (i >= 1)
					sum[i - 1] += 1;
				if(i==0)
					digit41 = 1;
			}
		}
		HugeInteger sumObject(sum);
		return sumObject;
	}
	static HugeInteger subtract(HugeInteger a, HugeInteger b)
	{
		int sub[40]{};
		for (int i = 39;i >= 0;--i)
			sub[i] = a.integers[i] - b.integers[i];
		for (int i = 39;i >= 0;--i)
		{
			if (sub[i] < 0)
			{
				sub[i] += 10;
				sub[i - 1] -= 1;
			}
		}
		HugeInteger subObject(sub);
		return subObject;
	}
	static bool isEqualTo(HugeInteger a,HugeInteger b)
	{
		int difference = 0;
		for (int i = 0;i <= 39;++i)
		{
			if (a.integers[i] != b.integers[i])
			{
				++difference;
				break;
			}
		}
		if (difference > 0)
			return false;
		else
			return true;
	}
	static bool isNotEqualTo(HugeInteger a,HugeInteger b)
	{
		if (isEqualTo(a, b))
			return false;
		else
			return true;
	}
	static bool isGreaterThan(HugeInteger a,HugeInteger b)
	{
		int greater = 0;
		for (int i = 0;i <= 39;++i)
		{
			if (a.integers[i] > b.integers[i])
			{
				++greater;
				break;
			}
			else if (a.integers[i] < b.integers[i])
			{
				break;
			}
		}
		if (greater > 0)
			return true;
		else
			return false;
	}
	static bool isLessThanOrEqualTo(HugeInteger a,HugeInteger b)
	{
		if (isGreaterThan(a, b))
			return false;
		else
			return true;
	}

	static bool isLessThan(HugeInteger a,HugeInteger b)
	{
		if (isGreaterThan(b, a))
			return true;
		else
			return false;
	}
	static bool isGreaterThanOrEqualTo(HugeInteger a, HugeInteger b)
	{
		if (isLessThan(a, b))
			return false;
		else
			return true;
	}
	
	static bool isZero(HugeInteger a)
	{
		int difference = 0;
		for (int i = 0;i <= 39;++i)
		{
			if (a.integers[i] != 0)
			{
				++difference;
				break;
			}
		}
		if (difference > 0)
			return false;
		else
			return true;
	}
private:
	int integers[40];
};



int main()
{
	cout << "Input two integers one after another." << endl;
	int a[40]{}, b[40]{};
	string as{}, bs{};
	cout << "a: " << endl;cout << " ";
	cin >> as;
	cout << "b: " << endl;cout << " ";
	cin >> bs;
	for (int i = 0;i <= 39;++i)
	{
		a[i] = static_cast<int>(as[i]) - 48;
		b[i] = static_cast<int>(bs[i]) - 48;
	}
	cout << boolalpha;
	HugeInteger H1(a), H2(b);
	if (digit41 > 0)
		cout << "\na+b:\n1";
	else
		cout << "\na+b:\n ";
	
	HugeInteger::add(H1, H2).output(); cout << endl;

	cout << "\na-b:" << endl;
	if (HugeInteger::isGreaterThanOrEqualTo(a, b))
	{
		cout << " ";HugeInteger::subtract(H1, H2).output(); cout << endl;
	}
	else
	{
		cout << "-";HugeInteger::subtract(H2, H1).output(); cout << endl;
	}

	cout << "\na is equal to b: " << endl;
	cout << HugeInteger::isEqualTo(H1, H2) << endl;

	cout << "\na is not equal to b: " << endl;
	cout << HugeInteger::isNotEqualTo(H1, H2) << endl;

	cout << "\na is greater than b: " << endl;
	cout << HugeInteger::isGreaterThan(H1, H2) << endl;

	cout << "\na is less than b: " << endl;
	cout << HugeInteger::isLessThan(H1, H2) << endl;

	cout << "\na is greater than or equal to b: " << endl;
	cout << HugeInteger::isGreaterThanOrEqualTo(H1, H2) << endl;

	cout << "\na is less than or equal to b: " << endl;
	cout << HugeInteger::isLessThanOrEqualTo(H1, H2) << endl;

	cout << "\na is zero: " << endl;
	cout<< HugeInteger::isZero(H1) << endl;

	cout << "\nb is zero: " << endl;
	cout << HugeInteger::isZero(H2) << endl;
}