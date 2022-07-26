#include <iostream>
using namespace std;

int main()
{
	int num, c = 1, l = 0;
	cin >> num;
	do
	{
		l++;
		while(c <= l)
		{
			c++;
			num--;
		}
		c = 1;
	}while(num > 0);
	cout << l;
	return 0;
}

