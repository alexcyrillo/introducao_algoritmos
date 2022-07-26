/*A mãe de Gustavo quer pintar uma parede do quarto e pediu para Gustavo ir à loja de material de construção da cidade para comprar a tinta que será usada. Chegando a loja, a atendente perguntou qual quantidade ele iria precisar. Porém, ele não soube responder. Voltando para casa, Gustavo encontrou com você no caminho e pediu que o ajudasse. Desta forma, o seu papel é criar um programa que indique qual quantidade de tinta será necessária para pintar a parede do quarto.

Faça um programa que receba a largura e a altura da parede do quarto em metros, calcule a área da parede (A = b*h) e diga qual a quantidade de tinta necessária para pintar a parede, sabendo que cada litro de tinta, pinta uma área de 2 metros quadrados e que o pintor dará 3 demãos de tinta na parede.

Observação: exiba o resultado em litros com 2 casas decimais apenas.

Entradas:

Dois números em ponto flutuante, representando a largura e a altura da parede, respectivamente. Os dados serão inseridos em uma única linha, separados por espaço.
Saídas:

Quantidade de tinta necessária para pintar a parece do quarto, seguida da palavra Litros. O resultado deve ser exibido com 2 casas decimais apenas.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float larg, alt;
	
	cin >> larg >> alt;	
	cout << 3 * (larg * alt / 2) << " Litros";
	
	return 0;
}
