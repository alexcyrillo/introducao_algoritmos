/*A moeda corrente de um determinado país possui notas de 100, 50, 20, 10, 5, 2 e 1 unidade monetária. Faça um programa que recebe um valor inteiro positivo nesta moeda, e retorna quantas notas de cada valor devem ser utilizadas para obter tal valor, utilizando o menor número de notas possível.

Entradas:

Um número inteiro positivo, representando o valor a ser obtido utilizando as notas.

Saídas:

Número de notas de 100.
Número de notas de 50.
Número de notas de 20.
Número de notas de 10.
Número de notas de 5.
Número de notas de 2.
Número de notas de 1.

Exemplo de Entrada:

36
Exemplo de saída:

0 
0 
1
1
1
0
1

Exemplo de Entrada:

267

Exemplo de Saída:

2
1
0
1
1
1
0
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int valor;
	
	cin >> valor;
	
	cout << valor / 100 << endl 
		 << valor % 100 / 50 << endl
		 << valor % 100 % 50 / 20 << endl
		 << valor % 100 % 50 % 20 / 10 << endl
		 << valor % 100 % 50 % 20 % 10 / 5 << endl
		 << valor % 100 % 50 % 20 % 10 % 5 / 2 << endl
		 << valor % 100 % 50 % 20 % 10 % 5 % 2 << endl;
	
	
	return 0;
}
