/*
Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir.

Saldo médio	Tipo do intervalo	Crédito
Até zero	⊷	zero
de R$0,00 a R$200,00	⊷	10% do saldo médido
de R$200,00 a R$400,00	⊷	15% do saldo médido
de R$400,00 a R$800,00	⊷	20% do saldo médido
de R$800,00 a R$1600,00	⊷	25% do saldo médido
acima de R$1600,00	⊷	30% do saldo médido
Escreva o saldo médio e o valor do crédito.

Exemplo de entrada:

421.58
Exemplo de saída:

421.58
84.32
Exemplo de Entrada:

265.85
Exemplo de Saída:

265.85
39.88
*/

#include <iostream>
using namespace std;

int main()
{
	float media;
	
	cin >> media;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	if (media >= 1600)
		cout << media << endl << media * 0.30 ;
	else if (media < 1600 and media >= 800)
		cout << media << endl << media * 0.25;
	else if (media < 800 and media >= 400)
		cout << media << endl << media * 0.20;
	else if (media < 400 and media >= 200)
		cout << media << endl << media * 0.15;
	else if (media < 200 and media >= 0)
		cout << media << endl << media * 0.10;
	else
		cout << media << endl << "0";
		
	return 0;
}
