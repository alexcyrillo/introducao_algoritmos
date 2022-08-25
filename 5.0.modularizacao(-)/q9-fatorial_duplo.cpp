/*O fatorial duplo de um número n denotado por n!! é dado pelo produto dos números de 1 até n que tenham a mesma paridade de n. Por exemplo o fatorial duplo de 9 é dado por 9*7*5*3*1=945, já o fatorial duplo de 8 é 8*6*4*2=384 e o fatorial duplo de 0 é 1.

Faça um programa que receba um número inteiro positivo n e utilizando uma função recursiva calcule seu fatorial duplo.

Entradas:

Número inteiro positivo n.
Saídas:

Fatorial duplo do número n.
Exemplo de Entrada:

5
Exemplo de Saída:

15*/
#include <iostream>
using namespace std;

int fatorialDupla(int n)
{
    if( n == 0 || n == 1)
        return 1;
    else
    {
        n -= 2;
        return((n + 2) * fatorialDupla(n));
    }
}

int main()
{
    int fatorial;
    cin >> fatorial;
    cout << fatorialDupla(fatorial);
    return 0;
}