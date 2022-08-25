/*Escreva um programa que calcula o valor da função F, definida recursivamente:

F(x) = 1, se x igual a 0,
F(x) = 2H(x) + F(x-1), se x maior que 0 e par,
F(x) = 2H(x) - F(x-1), se x maior que 0 e ímpar.

Observe que F é definida em termos de H, apresentada abaixo:

H(x) = 0, se x igual a 0,
H(x) = H(x-1) + F(x-1), se x maior que 0.

Entradas:

Valor inteiro x positivo para o qual se deseja calcular o valor de F(x).
Saídas:

Valor de F(x)
Exemplo de Entrada:
8

Exemplo de Saída:
2705

======================
Exemplo de Entrada:
5

Exemplo de saída:
73
*/
#include <iostream>
using namespace std;

int funcaoF(int);

int funcaoH(int x)
{
    if(x == 0)
    {
        return 0;
    }
    else
    {
        return (funcaoH(x - 1) + funcaoF(x - 1));
    }
}

int funcaoF(int x)
{
    if(x == 0)
    {
        return 1;
    }
    else if(x % 2 == 0)
    {
        return (2 * funcaoH(x) + funcaoF(x - 1));
    }
    else
    {
        return (2 * funcaoH(x) - funcaoF(x - 1));
    }
}

int main()
{
    int x;
    cin >> x;
    cout << funcaoF(x);
}