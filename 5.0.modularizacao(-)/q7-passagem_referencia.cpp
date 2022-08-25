/*Escreva um programa que contenha um procedimento que recebe dois parâmetros inteiros, calcula a soma deles e armazene-a em um terceiro parâmetro, que deverá ser passado por referência para que seu valor possa ser alterado dentro do subprograma. O programa deve pedir ao usuário que digite dois números e então usar esse procedimento para calcular a soma e mostrar o resultado na tela.

Entrada:

Dois valores inteiros, passados como parâmetros para o procedimento.
Saída:

A soma desses valores, passada por referência pelo procedimento.
Exemplo de entrada:

	1 2
	
Exemplo de saída:

	3*/
#include <iostream>
using namespace std;

void soma(int a, int b, int &total)
{
	total = a + b;
}

int main()
{
	int a, b , total;
	cin >> a >> b;
	soma(a,b ,total);
	cout << total;
	return 0;
}

