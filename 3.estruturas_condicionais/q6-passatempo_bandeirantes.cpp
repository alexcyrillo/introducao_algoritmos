#include <iostream>
using namespace std;

int main()
{
	string cor1, cor2;
	int num, num2, un, dez, cen, mil, dezMil, cenMil;
	
	cin >> cor1 >> cor2 >> num;
	
	cenMil = num / 100000;
	num2 = cenMil * 100000;
	dezMil = (num - num2) / 10000;
	num2 += dezMil * 10000;
	mil = (num - num2) / 1000;
	num2 += mil * 1000;
	cen = (num - num2) / 100;
	num2 += cen * 100;
	dez = (num - num2) / 10;
	num2 += dez * 10;
	un = (num - num2);
	if (un == cenMil and dez == dezMil and cen == mil)
		cout << cor1;
	else
		cout << cor2;	
	
	return 0;
}
