/*
Uma pessoa está aprendendo sobre cores, ela aprendeu que existem as cores primárias (amarelo, vermelho e azul) e as cores secundárias (verde, laranja e violeta) que são cores derivadas das primárias, mas ela está com dificuldades para entender a mistura das cores primárias e os resultados, para isso, ela pediu para você desenvolver um programa em que ela insira duas cores primárias e mostre o resultado da mistura das cores. As informações das misturas podem ser consultadas na tabela a seguir:

Mistura	Resultado
Azul+Amarelo	Verde
Azul+Vermelho	Violeta
Vermelho+Amarelo	Laranja
O programa deverá receber como entrada duas cores primárias escritas com letras minúsculas e deverá mostrar como saída o resultado da mistura entre elas com letras minúsculas.

Obs: A ordem das entradas não altera o resultado e caso as entradas sejam iguais, o resultado será a própria cor.

Entradas:

Primeira cor primária (letras minúsculas).
Segunda cor primária (letras minúsculas).
Saídas:

Resultado da mistura (letras minúsculas)
Exemplo de Entrada:

amarelo
vermelho
Exemplo de Saída:

laranja
Exemplo de Entrada:

azul
azul
Exemplo de Saída:

azul
*/
#include <iostream>
using namespace std;

int main()
{
	string cor1, cor2;
	
	cin >> cor1 >> cor2;
	
	if (cor1 == cor2)
		cout << cor1;
	else if (cor1 == "azul")
		{
			if (cor2 == "amarelo")
				cout << "verde";
			else if (cor2 == "vermelho")
				cout << "violeta";
		}
	else if (cor1 == "amarelo")
		{
			if (cor2 == "azul")
				cout << "verde";
			else if (cor2 == "vermelho")
				cout << "laranja";
		}
	else if (cor1 == "vermelho")
		{
			if (cor2 == "amarelo")
				cout << "laranja";
			else if (cor2 == "azul")
				cout << "violeta";
		}
				
	return 0;
}
