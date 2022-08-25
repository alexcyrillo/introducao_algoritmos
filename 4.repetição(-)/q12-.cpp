//calculo_pi
/*É possível calcular o valor de pi, utilizando a seguinte série:

raiz(2)/2 + raiz(2 + raiz(2))/2 + raiz(2 + raiz(2 + raiz(2)))/2 ... = 2/pi

Sabendo dessas informações, faça um programa que efetue o cálculo aproximado de pi, recebendo um número que indica a quantidade de termos da sequência. Deve-se usar o tipo ponto flutuante de precisão dupla (double) para contas mais precisas.

Entradas:

Um inteiro que indica o número de termos utilizados na sequência. Quanto maior esse número mais preciso será o resultado.
Saídas:

Valor aproximado de pi, conforme cálculo do produtório.
Exemplo de entrada:

9
Exemplo de saída:

3.14159*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, j;
	double a = 0, cont = 1;
	cin >> i;
	j = i;
	while(i > 0)
	{
		while(j > 0)
		{
			 a += sqrt(2);
			 j--;
		}
		cont *= a / 2;
		i--;
	}
	cout << 2 / cont;
	return 0;
}

