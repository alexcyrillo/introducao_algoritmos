/*Um fabricante produz e embala seus produtos dois a dois. Recentemente ele começou a experimentar a venda dos produtos em embalagens de luxo, para presente, com preço maior.

Uma pesquisa de mercado estimou que existe demanda para 1/3 da sua produção distribuídos em embalagens de luxo. O fabricante então adaptou a linha de produção de tal forma que duas embalagens comuns são usadas, depois uma de luxo, depois mais duas comuns, depois mais uma de luxo e assim por diante.

Faça um programa que dada a quantidade de produtos, informe quantos foram distribuídos em embalagens comuns e quantos foram distribuídos em embalagens de luxo.

Entradas:

O número de produtos produzidos (um número inteiro, positivo).

Saídas:

O número de produtos distribuídos em embalagens comuns (número inteiro).
O número de produtos distribuídos em embalagens de luxo (número inteiro).
Exemplo de Entrada:

16

Exemplo de Saída:

11
5

Exemplo de Entrada:

26

Exemplo de Saída:

18
8
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int nTotal, nLuxo, nNormal, difNormal;
	
	cin >> nTotal;
	
	difNormal = (nTotal % 3);
	nTotal -= difNormal;
	nNormal = 2 * nTotal / 3 + difNormal;
	nLuxo = nTotal / 3;
	
	cout << nNormal << endl << nLuxo ;	
		
	return 0;
}
