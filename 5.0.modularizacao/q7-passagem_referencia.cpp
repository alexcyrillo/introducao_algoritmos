#include <iostream>
using namespace std;

void soma(int a, int b, int &total)
{
	total = a + b;
}

int main()
{
	int a, b , total;
	cin >> a >> b;
	soma(a,b ,total);
	cout << total;
	return 0;
}

