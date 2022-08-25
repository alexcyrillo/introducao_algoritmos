/*
Faça um programa em que o usuário tem três opções opções de cálculo: calcular o seno de um ângulo, calcular o cosseno de um ângulo, e calcular o produto de dois ângulo (simplesmente os dois valores multiplicados). Os valores dos ângulos deverão ser em graus. O usuário escolhe a opção de cálculo usando números inteiros, conforme o menu a seguir:

Menu de Opções:

Seno de um ângulo.
Cosseno de um ângulo.
Multiplicação de dois ângulos.
Na multiplicação de dois ângulos, não é necessário fazer qualquer tipo de ajuste se o resultado for maior que 360°.

Entradas:

Opção desejada.
Ângulo(s) em graus, de acordo com a opção desejada. Recomenda-se usar ponto flutuante de precisão dupla.
Saídas:

Resultado da operação escolhida (número real). Recomenda-se usar precisão dupla.
Exemplo de entradas:

1
90
Exemplo de saídas:

1
Exemplo de entradas:

2
45
Exemplo de saídas:

0.707107
Exemplo de entradas:

3
45 
90
Exemplo de saídas:

4050
Dica: Para implementações em C++, a biblioteca cmath proporciona operações para calcular seno (sin) e cosseno (cos) de ângulos expressos em radianos. Um radiano equivale a 180/π graus. A biblioteca cmath também proporciona a constante M_PI com o valor aproximado de π.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int op;
	double ang1, ang2;
	
	cin >> op;
	
	switch (op)
	{
		case 1:
			cin >> ang1;
			ang2 = ang1 * M_PI / 180;
			cout << sin(ang2);
		break;	
		case 2:
			cin >> ang1;
			ang2 = ang1 * M_PI / 180;
			cout << cos(ang2);
		break;
		case 3:
			cin >> ang1 >> ang2;
			cout << ang1 * ang2;
		break;
	}
	
	return 0;
}
