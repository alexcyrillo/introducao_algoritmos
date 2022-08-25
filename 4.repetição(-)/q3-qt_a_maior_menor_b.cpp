/*Crie um programa que receba como entrada uma sequência de caracteres "a" e "b". A sequência deve ter o tamanho de 10 caracteres. Seu programa deverá retornar 1 se o número de caracteres "a" for menor que o total de caracteres "b", ou retornar 0 caso não ocorra a condição.

Entrada:

a b b b a a b b b a
Saída:

1*/
#include <iostream>
using namespace std;

int main()
{
	int i = 0, qt_a = 0, qt_b = 0;
	char op;
	while(i < 9)
	{
		cin >> op;
		switch(op)
		{
			case 'a':
				qt_a++;
				break;
			case 'b':
				qt_b++;
				break;
		}
		i++;
	}
	if(qt_a < qt_b)
		cout << 1;
	else
		cout << 0;
}

