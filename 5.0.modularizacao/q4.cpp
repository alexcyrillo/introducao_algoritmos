#include <iostream>
using namespace std;



void linha(int n)
{
	int i = 1;
	while(i <= n)
	{
		cout << i << ' ';
		i++;
	}
}

void coluna(int n)
{
	int i = 1;
	while(i <= n)
	{
		linha(i);
		cout << endl;
		i++;
	}
}

int main()
{
	int n;
	cin >> n;
	coluna(n);
	return 0;
}

