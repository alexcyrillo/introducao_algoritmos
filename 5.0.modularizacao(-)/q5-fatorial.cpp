/*Faça uma função que receba um número inteiro N, maior ou igual a 0, e retorne o valor de seu fatorial (N!). O fatorial de um número N é calculado por 1 * 2 * 3 * ...* N. O valor do fatorial de 0 é, por definição, igual a 1.

Entrada:
Um número inteiro

Saída:
Fatorial do número
Exemplo de entrada:
5
Exemplo de saída:
120*/
#include <iostream>
using namespace std;

int fatorial(int n)
{
	int total = 1, i = 1;
	while(i <= n)
	{
		total *= i;
		i++;
	}
	return total;
}

int main()
{
	int num;
	cin >> num;
	cout << fatorial(num);
	return 0;
}

