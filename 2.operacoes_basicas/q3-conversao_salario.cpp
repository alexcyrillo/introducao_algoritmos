/*Faça um programa que receba o valor do salário de um funcionário em reais e converta este valor para Dólar, Euro e Libra.

Adote:

1 Dólar = 2.13 Reais
1 Euro = 2.84 Reais
1 Libra = 3.34 Reais

Entradas:

Valor em reais do salário do funcionário (número real).

Saídas (atenção à ordem):

Valor do salário em Dólar (número real).
Valor do salário em Euro (número real).
Valor do salário em Libra (número real).

Exemplo de Entrada:

600

Exemplo de Saída:

281.69
211.26
179.64

Exemplo de Entrada:

816.87

Exemplo de Saída:

383.51
287.63
244.57
*/
#include <iostream>
using namespace std;
int main()
{
	float real;
	
	cin >> real;
	
	cout << real / 2.13 << endl << real / 2.84 << endl << real / 3.34;
	
	return 0;

}
