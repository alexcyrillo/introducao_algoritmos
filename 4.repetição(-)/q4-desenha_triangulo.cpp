/*Faça um programa que leia da entrada padrão um número inteiro que indicará a quantidade de linhas que um triângulo terá. O programa deverá imprimir na saída padrão um triângulo onde cada coluna será uma letra do alfabeto.

Entradas:

A quantidade de linhas do triângulo (número inteiro menor que 27).
Saídas:

O triângulo onde cada coluna é uma letra do alfabeto.
Exemplo de Entrada:

5
Exemplo de Saída:

a 
a b 
a b c 
a b c d 
a b c d e */
#include <iostream>
using namespace std;

int main()
{
	int lin = 1, col = 1, input;
	char letra = 97;
	cin >> input;
	while(lin <= input)
	{	
		while(col <= lin)
		{
			cout << letra << ' ';
			letra ++;
			col++;
		}
		cout << endl;
		col = 1;
		letra = 97;
		lin++;
	}		
	return 0;
}

