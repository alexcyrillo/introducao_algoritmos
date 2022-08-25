/*Faça um programa capaz de obter o quociente inteiro da divisão de dois números, sem utilizar a operação de divisão (/) e nem o operador resto (%).

Entradas:

Dois números inteiros positivos.
Saídas:

Quociente da divisão inteira.
Exemplo de Entrada:

8
2
Exemplo de Saída:

4*/
#include <iostream>
using namespace std;

int main()
{
	int D, d, i = 0;
	cin >> D >> d;

	if(d != 0)
	{
		while(D >= d)
		{
			D -= d;
			i++;
		}
		cout << i;
		     
	return 0;
	}
}

