/*Faça um programa que leia uma fração, simplifique a fração usando um subprograma específico para isto e escreva a fração simplificada. O planejamento a respeito da passagem de parâmetros é parte importante da avaliação.

Considere que não existirão denominadores com o valor 0. Leitura e escrita deverão ser feitas na função principal.

Entradas (cada uma na sua própria linha):

O numerador (número inteiro);
o denominador (número inteiro diferente de zero).
Saídas:

O numerador da fração simplificada;
o denominador da fração simplificada.
Exemplo de Entrada:

9
15
Exemplo de Saída:

3
5*/
#include <iostream>
using namespace std;

void simplificar(int &n, int &d)
{
	int i = 1;
	while((i < n and i < d) and (i != n or i != d))
	{
		if(n % i == 0 and d % i == 0)
		{
			n /= i;
			d /= i;
		}
		i++;
	}
}

int main()
{
	int num, den;
	cin >> num >> den;
	simplificar(num, den);
	cout << num << endl << den;
	return 0;
}

