/*
Faça um programa que receba como entrada dois números em ponto flutuante, representando os operandos A e B de uma expressão aritmética a ser definida. Após receber os valores de A e B, seu programa deverá receber um número inteiro X compreendido no intervalo [1,4] que indicará uma determinada operação aritmética a ser computada. Os dados de entrada serão fornecidos em linhas diferentes. Seu programa deverá calcular a operação aritmética indicada por X e exibir no dispositivo de saída padrão o resultado da mesma. As operações aritméticas definidas por X são indicadas na relação a seguir:

Obs. Python: para soluções em Python, assuma que números em ponto flutuante com precisão dupla são os números em ponto flutuante tradicionais, ou seja, números em float.

Escolha do Usuário (X)	Operação
1	Média entre os números digitados
2	Subtrair o menor número do maior
3	Produto entre os números digitados
4	Divisão do primeiro pelo segundo
Se a opção digitada for inválida, seu programa deverá exibir a mensagem ERRO e terminar a execução do programa. Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero. Nesta situação, caso o segundo número seja igual a zero, a mensagem ERRO também deve ser exibida.

Entradas:

Dois números em ponto flutuante com precisão dupla A e B.
Números inteiro X que indica a operação aritmética a ser computada.
Saídas:

Número em ponto flutuante com precisão dupla que denota o resultado da expressão aritmética; ou a mensagem ERRO, caso o usuário insira um valor inválido de operação .
Exemplo de entrada:

9.5
7.0
5
Exemplo de saída:

ERRO
Exemplo de entrada:

9.5
7.0
2
Exemplo de saída:

2.5
*/
#include <iostream>
using namespace std;

int main()
{
	double num1, num2;
	int op;
	
	cin >> num1 >> num2 >> op;
	
	switch(op)
	{
		case 1: 
			cout << (num1 + num2) / 2;
			break;
		case 2:
			if (num1 > num2)
				cout << num1 - num2;
			else
				cout << num2 - num1;
			break;
		case 3:
			cout << num1 * num2;
			break;
		case 4:
			if (num2 != 0)
				cout << num1 / num2;
			else
				cout << "ERRO";
			break;
		default:
			cout << "ERRO";
	}

	return 0;
}
