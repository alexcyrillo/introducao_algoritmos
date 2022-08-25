/*Faça um programa que leia da entrada padrão um número inteiro positivo (de até 10 dígitos) e troque seu primeiro dígito com o último.

Apesar de ser possível resolver este problema sem repetição, é obrigatório o uso de repetição na solução entregue.

Entradas:

Um número inteiro positivo.
Saídas:

Número inteiro com o primeiro e o último dígitos trocados.
Exemplo de Entrada:

5091
Exemplo de Saída:

1095*/
#include <iostream>
using namespace std;

int main()
{
	long long int a, aux, num, i = 1;
	int primeiro, ultimo;
	cin >> num;
	ultimo = num;
	do
	{
		if(num >= i and (num < i * 10))
		{
			primeiro = num / i;
			aux = primeiro * i;
			a = i;
			while(a != 1)
			{
				a /= 10;
				ultimo -= aux;
				aux = (ultimo / a) * a;
			}
		}
		else
			i *= 10;
	}
	while(a != 1);
	num -= ((primeiro * i) + ultimo);
	num += ((ultimo * i) + primeiro);
	cout << num;
	return 0;
}
