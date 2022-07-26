/*Sabe-se que cada barreira de pneus é capaz de reduzir a velocidade do carro de F1 em 50km/h. Dada a velocidade do veículo ao atingir a primeira barreira, quantas barreiras seriam necessárias para pará-lo?

Entradas:

Velocidade do carro em km/h (número inteiro).
Saídas:

Número de barreiras necessárias para pará-lo.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int veloc;
	
	cin >> veloc;
	
	cout << ceil(veloc / 50.0);
	
	return 0;
}

