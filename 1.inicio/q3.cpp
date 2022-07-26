/*O espaço que um carro precisa para parar completamente depende de vários fatores. Apesar disso, algumas vezes é desejável avaliar a velocidade de um carro baseando-se no comprimento das marcas de derrapagem na pista.

Em condições comuns, a velocidade é aproximadamente igual a 14.6 vezes a raiz quadrada do comprimento da marca de derrapagem. Matematicamente: v = 14.6 c , em que v é a velocidade do carro e c é o comprimento da marca de derrapagem.

Faça um programa que recebe o comprimento de uma marca de derrapagem e escreve a velocidade aproximada do carro.

Entrada:

Número real indicando o comprimento da marca de derrapagem.
Saída:

Número real indicando a velocidade aproximada do carro.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float c, v;
	
	cin >> c;
		
	v = 14.6 * sqrt(c);
	
	cout << v;
	
	return 0;
	
} 
