/*Crie um programa que imprima os primeiros termos da sequência de Fibonacci, utilizando uma função que retorna o n-ésimo termo da referida série. Os termos dessa série são definidos da seguinte forma:

Fib(0) = 0
Fib(1) = 1
Fib(n) = Fib(n-1) + Fib(n-2), para n maior ou igual à 2

O índices mostrados na definição devem ser respeitados (não use outras definições). As operações de entrada e saída de dados devem ser realizadas no subprograma principal. Implementações em Python devem declarar um subprograma chamado principal.

Entradas:

A quantidade de termos a escrever (número natural positivo).
Saídas:

Sequência de Fibonacci começando do 0.
Exemplo de Entradas:

9
Exemplo de Saída:

0 1 1 2 3 5 8 13 21*/
#include <iostream>
using namespace std;

void fib(int n)
{
    int f1 = 0, f2 = 0, i = 1, alt = 1;
    while (i <= n)
    {
        cout << f1 << ' ';
        f2 = f1;
        f1 = f2 + alt;
        alt = f2;
        i++;
    }
}

int main()
{
	int n;
	cin >> n;
    fib(n);
	return 0;
}
