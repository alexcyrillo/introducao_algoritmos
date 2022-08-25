/*Para organizar a expedição de Lisboa para o Brasil, Cabral dispunha de cinco naus e precisava calcular quantas caravelas iria construir, de acordo com a quantidade de homens. Cada nau tinha capacidade para 200 pessoas e cada caravela tinha capacidade para 80 pessoas. Faça um programa para ler a quantidade de homens e calcular quantas caravelas seria necessário construir. Assuma que Cabral utilizará primeiro todas as suas naus já construídas e só então, caso seja necessário, irá mandar construir as caravelas necessárias. Nesta questão, assuma também que a quantidade de homens a serem transportados sempre será no mínimo o suficiente para utilizar por completo todas as naus.

Considere que se a quantidade de caravelas for decimal, é necessário construir uma caravela a mais (usar a função ceil).

Entradas:

Quantidade de homens

Saídas:

Quantidade de caravelas

Exemplo de Entrada:

1200

Exemplo de Saída:

3
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int tripulacao;
	float caravelas;
	
	cin >> tripulacao;
	
	tripulacao -= 1000;
	//retirando numero de pessoas que irao em naus
	caravelas = tripulacao / 80.0;
	
	cout << ceil(caravelas);
	
	return 0;
}
