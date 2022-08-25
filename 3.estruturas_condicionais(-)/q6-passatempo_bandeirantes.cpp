/*
Bandeirantes é a denominação dada aos sertanistas do período colonial, que, a partir do início do século XVI, penetraram nos sertões da América do Sul em busca de riquezas minerais, sobretudo o ouro e a prata.

Em um dado grupo de bandeirantes, um jogo bem simples se mostrou particularmente popular durante suas longas viagens. Tal jogo consistia em falar uma determinada cor se um dado número natural de 6 algarismos fosse um palíndromo, ou dizer uma segunda outra cor caso não fosse. Faça um programa que leia o nome de duas cores e um número natural (nesta ordem), seu programa deverá exibir o nome da primeira cor caso o número natural fornecido seja um palíndromo ou exibir o nome da segunda cor caso ele não seja um palíndromo. Cada dado de entrada será fornecido em uma linha diferente.

Dizemos que um número natural N é palíndromo se

Primeiro algarismo de N é igual ao seu último algarismo
Segundo algarismo de N é igual ao penúltimo algarismo
e assim sucessivamente.

Entradas:

Nome da primeira cor.
Nome da segunda cor.
Número inteiro N.
Saídas:

Nome de uma cor segundo a regra definida no enunciado desta questão.
Exemplo de Entrada:

azul
vermelho
567765
Exemplo de Saída:

azul
Exemplo de Entrada:

azul
vermelho
567675
Exemplo de Saída:

vermelho
*/
#include <iostream>
using namespace std;

int main()
{
	string cor1, cor2;
	int num, num2, un, dez, cen, mil, dezMil, cenMil;
	
	cin >> cor1 >> cor2 >> num;
	
	cenMil = num / 100000;
	num2 = cenMil * 100000;
	dezMil = (num - num2) / 10000;
	num2 += dezMil * 10000;
	mil = (num - num2) / 1000;
	num2 += mil * 1000;
	cen = (num - num2) / 100;
	num2 += cen * 100;
	dez = (num - num2) / 10;
	num2 += dez * 10;
	un = (num - num2);
	if (un == cenMil and dez == dezMil and cen == mil)
		cout << cor1;
	else
		cout << cor2;	
	
	return 0;
}
