/*Um número triangular é um número natural que pode ser representado na forma de triângulo equilátero (veja a ilustração). Sendo os primeiros números: 1, 3, 6, 10, 15, 21, 28, e assim por diante.

Faça um programa que, dado um número inteiro positivo N, retorne o N-ésimo número triangular. O n-ésimo número triangular pode ser obtido pela soma de n ao (n-1)-ésimo número triangular. Ou seja:

NumTriang(1) = 1

NumTriang(N) = N + NumTriang(N-1)

Exemplo de entrada:
4

Exemplo de saída:
10*/
#include <iostream>
using namespace std;

int main()
{
	int num, num_triang = 0, n = 1;
	cin >> num;
	while(n <= num)
	{
		num_triang = n + num_triang;
		n++;
	}
	cout << num_triang;
	return 0;
}

