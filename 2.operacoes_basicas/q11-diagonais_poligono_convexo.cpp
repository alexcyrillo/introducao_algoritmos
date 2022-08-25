/*
Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono. Sabe-se que NumeroDeDiagonais = [N * (N - 3)] / 2, em que N é o número de lados do polígono.

Entrada:

Número inteiro representando o número de lados do polígono (N > 3).

Saída:

Numero de diagonais desse polígono.

Exemplo de Entrada:

9

Exemplo de Saída:

27

Exemplo de Entrada:

3

Exemplo de Saída:

0
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int lados;
	
	cin >> lados;
	
	cout << lados * (lados - 3) / 2;
	
	return 0;
}
