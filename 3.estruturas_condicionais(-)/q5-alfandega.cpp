/*
Faça um programa para auxiliar nas atividades realizadas por uma alfândega. Para realizar estas atividades seu programa deverá receber como entrada três tipos de informação, a saber: (1) código de um produto comprado. Assuma que a digitação do código do produto será sempre válida, o que neste programa significa um número inteiro entre 1 e 10 ; (2) peso do produto em quilogramas; e (3) código do país de origem do produto. Assuma que a digitação do código será sempre válida, o que neste programa significa um número inteiro entre 1 e 3. Cada dado de entrada será fornecido em uma linha diferente. Seu programa deverá calcular e exibir no dispositivo de saída padrão as seguintes informações (nesta ordem):

O peso do produto convertido em gramas.
O preço bruto do produto comprado, definido de acordo com o seu peso em gramas e o código do produto.
O valor do imposto, sabendo-se que ele é cobrado sobre o preço bruto do produto comprado e depende do país de origem.
O valor total do produto, dado pelo preço bruto do produto mais o imposto.
Para realizar estes cálculos, considere as tributações elucidadas a seguir:

Código do país de origem	Imposto
1	0%
2	15%
3	25%
Código do produto	Preço por grama
1 a 4	10
5 a 7	25
8 a 10	35
Entradas:

Número inteiro que denota o código do produto. Número entre 1 e 10.
Número em ponto flutuante (float) que denota o peso do produto em quilogramas.
Número inteiro que denota o país de origem do produto. Número entre 1 e 3.
Saídas:

Número em ponto flutuante (float) que denota o peso do produto em gramas.
Número em ponto flutuante (float) que denota o preço bruto do produto.
Número em ponto flutuante (float) que denota o imposto sobre o produto.
Número em ponto flutuante (float) que denota o preço total do produto.
Exemplo de entrada:

7
0.5
3
Exemplo de saída:

500.0
12500.0
3125.0
15625.0
Exemplo de Entrada:

3
4.7532
1
Exemplo de Saída:

4753.2
47532.0
0.0
47532.0
*/
#include <iostream>
using namespace std;

int main()
{
	int codProd, codPais;
	float peso, valor;
	
	cin >> codProd >> peso >> codPais;
	
	cout.precision(1);
	cout.setf(ios::fixed);
	peso *= 1000.0;
	cout << peso << endl;
	if (codProd <=4)
		valor = peso * 10.0;
	else if (codProd >= 5 and codProd <=7)
		valor = peso * 25.0;
	else
		valor = peso * 35.0;
	cout << valor << endl;
	switch (codPais)
		{
		case 1: cout << valor * 0.00 << endl
					 << valor;
				break;
		case 2: cout << valor * 0.15 << endl
					 << valor + valor * 0.15;
				break;
		case 3: cout <<	valor * 0.25 << endl
					 << valor + valor * 0.25;
				break;
		}
		
	return 0;
}
