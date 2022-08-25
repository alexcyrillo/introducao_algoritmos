/*A área de um trapézio é dada pela seguinte expressão:

Área = [(base maior + base menor) * altura] / 2

Faça um programa que receba as medidas acima de um trapézio (as duas bases e a altura), escritas em linhas separadas, calcula e exiba sua área.

Entrada:

Número real indicando o valor da base maior do trapézio;
Número real indicando o valor da base menor do trapézio;
Número real indicando o valor da altura do trapézio.

Saída:

Número real representando a área do trapézio (não deve haver limitação de casas decimais).

Exemplo de entrada:

6.4
4.2
2.8

Exemplo de saída:

14.84

Exemplo de Entrada:

10
7.3
3

Exemplo de Saída:

25.95*/
#include <iostream>
using namespace std;

int main()
{
	float bMaior, bMenor, altura, areaTrapezio;
	
	cin >> bMaior;
	cin >> bMenor;
	cin >> altura;
	
	areaTrapezio = (bMaior + bMenor) * altura / 2;
	
	cout << areaTrapezio;
	
	return 0;
}
