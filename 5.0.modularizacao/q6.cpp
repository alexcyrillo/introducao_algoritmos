#include <iostream>
using namespace std;

void simplificar(int &n, int &d)
{
	int i = 1;
	while((i < n and i < d) and (i != n or i != d))
	{
		if(n % i == 0 and d % i == 0)
		{
			n /= i;
			d /= i;
		}
		i++;
	}
}

int main()
{
	int num, den;
	cin >> num >> den;
	simplificar(num, den);
	cout << num << endl << den;
	return 0;
}

