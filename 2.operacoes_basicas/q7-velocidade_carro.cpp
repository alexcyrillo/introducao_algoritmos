/*O espaço que um carro precisa para parar completamente depende de vários fatores. Apesar disso, algumas vezes é desejável avaliar a velocidade de um carro baseando-se no comprimento das marcas de derrapagem na pista.

Em condições comuns, a velocidade é aproximadamente igual a 14.6 vezes a raiz quadrada do comprimento da marca de derrapagem. Matematicamente: v = 14.6 c , em que v é a velocidade do carro e c é o comprimento da marca de derrapagem.

Faça um programa que recebe o comprimento de uma marca de derrapagem e escreve a velocidade aproximada do carro.

Entrada:

Número real indicando o comprimento da marca de derrapagem.

Saída:

Número real indicando a velocidade aproximada do carro.

Exemplo de Entrada:

39.3

Exemplo de Saída:

91.527

Exemplo de Entrada:

15

Exemplo de Saída:

56.546
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float derrapagem, veloc;
	
	cin >> derrapagem;
	
	veloc = 14.6 * sqrt(derrapagem);
	
	cout.precision(3);
	cout.setf(ios::fixed);
	cout << veloc;

	return 0;
}
