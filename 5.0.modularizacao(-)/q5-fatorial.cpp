#include <iostream>
using namespace std;

int fatorial(int n)
{
	int total = 1, i = 1;
	while(i <= n)
	{
		total *= i;
		i++;
	}
	return total;
}

int main()
{
	int num;
	cin >> num;
	cout << fatorial(num);
	return 0;
}

