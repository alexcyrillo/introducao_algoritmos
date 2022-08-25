/*Você quer construir uma roda gigante (num programa de computador) e para isso, precisa encontrar as coordenadas de cada cadeira que a roda tem. O centro da roda fica na origem do sistema de coordenadas. Veja a ilustração.


Faça um programa que recebe:

o raio da roda gigante,
a quantidade de cadeiras da roda gigante,
(nesta ordem), calcula e escreve as coordenadas de cada cadeira. Considere que a primeira cadeira sempre fica do lado direito (x = raio, y = 0).

Dica 1: use as funções de seno e cosseno (sin e cos) da biblioteca cmath.

Dica 2: As funções de trigonometria, usam valores expressos em radianos e o valor de PI é: 3.14159265358.

Se você quiser melhorar a legibilidade das respostas, use a saída formatada, proporcionada pela biblioteca iomanip. Para tanto, antes de escrever os dados calculados, mande escrever fixed e setprecision(2).

Exemplo de Entrada:
70 10

Exemplo de Saída (com a formatação sugerida):
70.00 0
56.63 41.14
21.63 66.57
-21.63 66.57
-56.63 41.14
-70.00 -0.00
-56.63 -41.14
-21.63 -66.57
21.63 -66.57
56.63 -41.14*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const float PI = 3.14159265358;

int main()
{
	int cadeira, i = 0;
	float ang, raio, pos_x, pos_y;
	cout << fixed << setprecision(2);
	cin >> raio >> cadeira;
	ang = 2 * PI/cadeira;
	while(i < cadeira)
	{
		pos_x = raio * cos(i * ang);
		pos_y = raio * sin(i * ang);
		cout << pos_x << ' ' << pos_y << endl;
		i++;
	}
	return 0;
}

