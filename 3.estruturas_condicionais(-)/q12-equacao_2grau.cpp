/*Faça um programa que calcule as raízes de uma equação de segundo grau (ax² + bx + c). Se a equação não tiver raízes reais, o programa deve escrever nenhuma raiz.

Entradas:

Os três coeficientes da equação do segundo grau: a, b e c (nesta ordem). Suponha que o coeficiente a é diferente de zero. Cada dado de entrada será fornecido em uma linha diferente.
Saídas:

As raízes da equação na seguinte ordem (obs: para visualizar a equação corretamente use o navegador Mozilla Firefox):
A raiz obtida por: r= - b - Δ 2 a
O segundo deve ser a raiz obtida por: r= - b + Δ 2 a
Lembrete: Δ = b² - 4ac

Exemplo de entradas:

1 
-14  
48
Exemplo de saídas:

6  8
Exemplo de Entrada:

3
1
8
Exemplo de Saída:

nenhuma raiz*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, delta;
	
	
	cin >> a >> b >> c;
	
	delta = pow(b, 2) - 4 * a * c;
	if (delta < 0 )
		cout << "nenhuma raiz";
	else if (delta >= 0)
			cout << (-b - sqrt(delta)) / 2 * a << endl << (-b + sqrt(delta)) / 2 * a;

	return 0;
}
