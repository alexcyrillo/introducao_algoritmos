#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float alturaEscada, alturaDegrau;
	int nDegrau;
	
	cin >> alturaDegrau >> alturaEscada;
	
	//transforando em metros
	alturaDegrau /= 100;
	
	nDegrau = ceil(alturaEscada / alturaDegrau);
	
	cout << nDegrau;
	
	return 0;
}
