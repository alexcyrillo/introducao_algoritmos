#include <iostream>
using namespace std;

int main()
{
	int media, presenca, matricula;
	
	cin >> matricula >> media >> presenca;
	
	matricula %= 100000000;
	matricula %= 10000000;
	matricula %= 1000000;
	matricula %= 100000;
	if ((media >= 60 and media < 70 and presenca >= 75) or (media >= 70 and presenca >= 65))
		cout << matricula << 'A';
	else
		cout << matricula << 'R';
			
	return 0;
}
