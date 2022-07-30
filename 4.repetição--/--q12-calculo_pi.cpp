#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, j;
	double a = 0, cont = 1;
	cin >> i;
	j = i;
	while(i > 0)
	{
		while(j > 0)
		{
			 a += sqrt(2);
			 j--;
		}
		cont *= a / 2;
		i--;
	}
	cout << 2 / cont;
	return 0;
}

