#include <iostream>
using namespace std;

int main()
{
	int num, a, b;
	cin >> num;
	if(num <= 999999 and num >= 100000)
	{
		a = (num / 100000) * 100000;
		num %= 100000;
		a = (num / 10000) * 10000;
		num %= a;
		a = num / 1000;
		b = (num % 1000) / 100;
	}
	else if(num < 100000 and num >= 10000)
	{
		a = (num / 10000) * 10000;
		num %= a;
		a = num / 1000;
		b = (num % 1000) / 100;
	}
	else if(num < 10000 and num >= 1000)
	{
		a = num / 1000;
		b = (num % 1000) / 100;
	}

	if((a + b == 7 or a + b == 8) and a * b == 12)
	{
		cout << "Inimigo";
	}
	else
	{
		cout << "Amigo";
	}
	return 0;
}

