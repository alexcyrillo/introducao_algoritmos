#include <iostream>
using namespace std;

int catalan(int n)
{
	int a = 1, b = 1, c = 1, i = 1, j = 1, soma = 1;
	while(i < n)
	{
		while(j < i)
		{
			a *= 2 * j;
			b *= (j + 1);
			c *= j;
			j++;
		}
		soma += a/ (b * c);
		j = 1;
		a = 1;
		b = 1;
		i++;
	}
	return soma;
}

int main()
{
	int n;
	cin >> n;
	cout << catalan(n);
	return 0;
}

