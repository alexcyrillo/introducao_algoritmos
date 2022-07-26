#include <iostream>
using namespace std;

int main()
{
	int hrs;
	float valorHrTrabalhada, salarioMin, salarioBruto, salarioFinal;
	
	cin >> salarioMin;
	cin >> hrs;
	
	valorHrTrabalhada = 5 * salarioMin / 100;
	salarioBruto = hrs * valorHrTrabalhada;
	salarioFinal = 77 * salarioBruto / 100;
	
	cout << salarioFinal;
		
	return 0;
}
