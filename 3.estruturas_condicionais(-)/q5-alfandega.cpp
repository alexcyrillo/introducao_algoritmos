#include <iostream>
using namespace std;

int main()
{
	int codProd, codPais;
	float peso, valor;
	
	cin >> codProd >> peso >> codPais;
	
	cout.precision(1);
	cout.setf(ios::fixed);
	peso *= 1000.0;
	cout << peso << endl;
	if (codProd <=4)
		valor = peso * 10.0;
	else if (codProd >= 5 and codProd <=7)
		valor = peso * 25.0;
	else
		valor = peso * 35.0;
	cout << valor << endl;
	switch (codPais)
		{
		case 1: cout << valor * 0.00 << endl
					 << valor;
				break;
		case 2: cout << valor * 0.15 << endl
					 << valor + valor * 0.15;
				break;
		case 3: cout <<	valor * 0.25 << endl
					 << valor + valor * 0.25;
				break;
		}
		
	return 0;
}
