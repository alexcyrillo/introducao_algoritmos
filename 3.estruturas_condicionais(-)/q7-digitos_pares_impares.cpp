/*
Dado um número inteiro N de 5 dígitos (10000 <= N <= 99999), faça um programa para descobrir a quantidade de dígitos pares e ímpares existentes em N.

Entradas:

Um número inteiro N de 5 dígitos.
Saídas:

Um número inteiro que indica a quantidade de dígitos pares existente em N.
Um número inteiro que indica a quantidade de dígitos ímpares existente em N.
Exemplo de Entrada:

10379
Exemplo de Saída:

1
4
Exemplo de Entrada:

13579
Exemplo de Saída:

0
5
Exemplo de Entrada:

24680
Exemplo de Saída:

5
0
*/
#include <iostream>
using namespace std;

int main()
{
	int par, impar, num, num2, un, dez, cen, mil, dezMil;

	par = 0;
	impar = 0;
	
	cin >> num;
	
	dezMil = num / 10000;
	num2 = dezMil * 10000;
	mil = (num - num2) / 1000;
	num2 += mil * 1000;
	cen = (num - num2) / 100;
	num2 += cen * 100;
	dez = (num - num2) / 10;
	num2 += dez * 10;
	un = (num - num2);
	
	if (un % 2 == 0)
		par = 1;
	else
		impar = 1;
	if (dez % 2 == 0)
		par += 1;
	else
		impar += 1;
	if (cen % 2 == 0)
		par += 1;
	else
		impar += 1;
	if (mil % 2 == 0)
		par += 1;
	else
		impar += 1;
	if (dezMil % 2 == 0)
		par += 1;
	else
		impar += 1;
		
	cout << par << endl << impar;		
	
	return 0;
}
