//corte_faro
/*Ilusionistas e trapaceiros bem treinados conseguem passar a ilusão de que embaralharam cartas, quando na verdade distribuíram elas em posições bem determinadas. Um método, conhecido como "o corte de Faro" consiste em dividir o baralho ao meio e depois juntar de maneira que a primeira carta da metade posterior fique no início, a primeira carta da metade anterior fique em segundo, a segunda carta da metade posterior fique em terceiro e assim por diante. No caso de quantidade ímpar de cartas, supõe-se que a metade posterior terá uma carta a mais.

Assim, a sequência de cartas ♥A, ♠A, ♦A, ♥K, ♠K, ♦K e ♣K, depois do corte de faro fica assim: ♥K, ♥A, ♠K, ♠A, ♦K, ♦A e ♣K.

Faça um programa que dada uma quantidade de cartas e a posição de uma carta, calcule e escreva a posição da mesma carta após o corte de Faro.

Entradas:

Quantidade de cartas e
posição inicial da carta (a primeira carta está na posição zero, a segunda na posição 1 e assim por diante).
Saídas:

A posição da carta após o corte de Faro (as posições começam em zero).
Exemplo de Entrada:

8
2
Exemplo de Saída:

5*/
#include <iostream>
using namespace std;

int main()
{
	int qtd, pos;
	
	cin >> qtd >> pos;
	
	if (pos < qtd / 2)
		cout << pos * 2 + 1;
	else 
		cout << (2 * pos - qtd + 2);
	
	return 0;
}
