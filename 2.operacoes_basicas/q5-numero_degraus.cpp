/*Cada degrau de uma escada tem uma certa altura. Faça um programa que receba essa altura em centímetros e a altura que o usuário deseja subir na escada em metros. Calcule e escreva quantos degraus o usuário deverá subir para, no mínimo, atingir seu objetivo, sem se preocupar com a altura do usuário.

Sugestão: use uma biblioteca matemática para arredondamento.

Entradas:

Altura dos degraus em centímetros (número real).
Altura que se deseja alcançar em metros (número real).

Saídas:

Número inteiro de degraus necessários para atingir o objetivo.

Exemplo de Entrada:

40
2

Exemplo de Saída:

5
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float alturaEscada, alturaDegrau;
	int nDegrau;
	
	cin >> alturaDegrau >> alturaEscada;
	
	//transforando em metros
	alturaDegrau /= 100;
	
	nDegrau = ceil(alturaEscada / alturaDegrau);
	
	cout << nDegrau;
	
	return 0;
}
