/*Desenvolva um programa que recebe o valor do salário mínimo e o número de horas trabalhadas por um funcionário, escritos em linhas diferentes. O programa deverá calcular e mostrar o salário que o funcionário irá receber seguindo as seguintes regras:

A hora trabalhada vale 5% do salário mínimo;
O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
O imposto equivale a 23% do salário bruto;
O salário a receber equivale ao salário bruto menos o imposto.

Entrada:

Um número real indicando o valor do salário mínimo;
Um valor inteiro indicando o número de horas trabalhadas.

Saída:

Número real que representa o valor do salário a receber.

Exemplo de entrada:

1200
160

Exemplo de saída:

7392

Exemplo de Entrada:

845.36
80

Exemplo de Saída:

2603.71*/
#include <iostream>
using namespace std;

int main()
{
	int hrs;
	float valorHrTrabalhada, salarioMin, salarioBruto, salarioFinal;
	
	cin >> salarioMin;
	cin >> hrs;
	
	valorHrTrabalhada = 5 * salarioMin / 100;
	salarioBruto = hrs * valorHrTrabalhada;
	salarioFinal = 77 * salarioBruto / 100;
	
	cout << salarioFinal;
		
	return 0;
}
