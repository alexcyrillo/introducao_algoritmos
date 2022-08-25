/*Escreva um programa que tem uma função que receba um número inteiro e retorne o mês correspondente ao número. Por exemplo, 2 corresponde à "fevereiro". A função deve retornar a string "erro" caso o número recebido não faça sentido. O módulo principal deve chamar a função que resolve o nome do mês e escrever a string retornada.

Os nomes dos meses e a string especial de erro devem usar somente letras minúsculas, sem acentuação nem caracteres especiais.

Obs: soluções em Python devem possuir um subprograma chamado principal.

Entradas:

Numero inteiro que supostamente representa um mês do ano.
Saídas:

O nome do mês retornado pela função, ou a mensagem de erro.
Exemplo de entrada 1:

3
Exemplo de saída 1:

marco
Exemplo de entrada 2:

15
Exemplo de saída 2:

erro*/
#include <iostream>
using namespace std;

string convMes(int n)
{
	string mes;
	switch(n)
	{
		case 1:
			mes = "janeiro";
		break;
		case 2:
			mes = "fevereiro";
		break;
		case 3:
			mes = "marco";
		break;
		case 4:
			mes = "abril";
		break;
		case 5:
			mes = "maio";
		break;
		case 6:
			mes = "junho";
		break;
		case 7:
			mes = "julho";
		break;
		case 8:
			mes = "agosto";
		break;
		case 9:
			mes = "setembro";
		break;
		case 10:
			mes = "outubro";
		break;
		case 11:
			mes = "novembro";
		break;
		case 12:
			mes = "dezembro";
		break;
		default:
			mes = "erro";
	}
	return mes;
}

int main()
{
	int mes;
	cin >> mes;
	cout << convMes(mes);
	return 0;
}

