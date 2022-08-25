/*
Faça um programa que computa os resultados de uma divisão inteira. Dados um dividendo e um divisor, o programa deve informar o quociente e o resto.

Caso não seja possível fazer a divisão, o programa deve escrever erro (letras minúsculas).

Entradas:

Um número inteiro que representa o dividendo (numerador).
Um número inteiro que representa o divisor (denominador).

Saídas:

O quociente da divisão.
O resto da divisão.

Exemplo de Entrada:

15
7

Exemplo de Saída:

2
1

Exemplo de Entrada:

5
0

Exemplo de Saída:

erro
*/

#include <iostream>
using namespace std;

int main()
{
	int numerador, denominador;
	
	cin >> numerador >> denominador;
	
	if (denominador != 0)
		{
			cout << numerador / denominador << endl << numerador % denominador;
		}
	else 
		cout << "erro";
		
	return 0;
}
