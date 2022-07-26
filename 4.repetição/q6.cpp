#include <iostream>
using namespace std;

int main()
{
	int f1 = 0, f2 = 0, i = 1, n, alt = 1;
	cin >> n;
	while (i <= n)
	{
		cout << f1 << ' ';
		f2 = f1;
		f1 = f2 + alt;
		alt = f2;
		i++;
	}
	return 0;
}

