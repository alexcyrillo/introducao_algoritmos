/*Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N indicando a quantidade de parcelas de uma soma S, e que calcula o valor de S pela fórmula:

S = 2/4 + 6/5 + 12/6 + ... + n*(n+1)/(n+3)
A sub-rotina deve ser parte de um programa cujo módulo principal deve ler o N e escrever o S. O planejamento da passagem de parâmetros faz parte da avaliação.

Entradas:

Número de parcelas da soma.
Saídas:

A soma das parcelas (ponto flutuante de precisão dupla).
Exemplo de entrada:

2
Exemplo de saída:

1.7*/
#include <iostream>
using namespace std;

double sParcelas(int n)
{
	double soma = 0;
	while(n > 0)
	{
		soma += n * (n + 1.0) / (n + 3.0);
		n--;
	}
	return soma;
}

int main()
{
	int n;
	cin >> n;
	cout << sParcelas(n);
	return 0;
}