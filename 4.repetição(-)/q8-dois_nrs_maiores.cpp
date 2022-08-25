/*Faça um algoritmo que leia 7 números reais. Após isso, imprima o maior valor e o segundo maior valor. Imprima também a média dos valores desconsiderando o maior e o segundo maior.

Exemplo de entrada:
13
2
5
6
4
3
12

Exemplo de saída:
13
12
4*/
#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	float maior, menor, num, med = 0;
	while(i <= 7)
	{
		cin >> num;
		if(i == 1)
			maior = num;
		else if(i == 2)
		{	
			if(num > maior)
			{	
				menor = maior;
				maior = num;
			}
			else
				menor = num;
		}
		else
		{
			if(num > maior)
			{
				menor = maior;
				maior = num;
			}
			else if(num > menor)
				menor = num;
		}
		med += num; 
		i++;
	}
	med -= (maior + menor);
	cout << maior << endl << menor << endl << med/5;		
	return 0;
}

