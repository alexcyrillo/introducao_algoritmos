#include <iostream>
using namespace std;

double sParcelas(int n)
{
	double soma = 0;
	while(n > 0)
	{
		soma += n * (n + 1.0) / (n + 3.0);
		n--;
	}
	return soma;
}

int main()
{
	int n;
	cin >> n;
	cout << sParcelas(n);
	return 0;
}