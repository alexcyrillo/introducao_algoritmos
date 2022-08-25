/*Escreva uma função chamada Media, que recebe dois números reais e retorna sua média. Escreva um programa para utilizar esta função.

Obs: soluções em Python devem possuir um subprograma chamado principal.

Entrada:

Dois números reais (ponto flutuante). Um em cada linha.
Saída:

A média desses dois números (ponto flutuante).
Exemplo de Entrada:

2
8
Exemplo de Saída:

5
Exemplo de Entrada:

4
5
Exemplo de Saída:

4.5*/
#include <iostream>
using namespace std;

float m_cm(float m)
{
	return m * 100;
}

float cm_m(float cm)
{
	return cm / 100;
}

int main()
{
	int med;
	string uni;
	cin >> med >> uni;
	if(uni == "centimetro")
		cout << m_cm(med);
	else if(uni == "metro")
		cout << cm_m(med);
	else
		cout << "erro";
	return 0;
}

