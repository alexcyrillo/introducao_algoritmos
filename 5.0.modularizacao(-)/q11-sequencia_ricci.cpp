/*A sequência de Ricci é uma sequência bastante semelhante à de Fibonacci, diferindo desta apenas pelo fato que os dois primeiros termos da sequência ( F(0) e F(1) ) devem ser definidos pelo usuário.

Sabendo-se que a sequência de Fibonacci é definida por:

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2) , n > 2
Crie um programa que imprima os n primeiros termos da sequência de Ricci, utilizando um subprograma recursivo que retorna o n-ésimo termo da referida série.

Entrada:

Os valores iniciais da série de Ricci ( F(0) e F(1) );
Os número de termos dessa sequência a serem impressos.
Saída:

Os n termos dessa sequência.
Exemplo de entrada:

5 8
6
Exemplo de saída:

5 8 13 21 34 55*/
#include <iostream>
using namespace std;

int ricci(int n0, int n1, int n)
{
        if(n == 0)
        {
            return n0;
        }
        else if(n == 1)
        {
            return n1;
        }
        else
        {
            return (ricci(n0, n1, n - 1) + ricci(n0, n1, n - 2));
        }
}

int main()
{
    int n0, n1, termos, n = 0;
    cin >> n0 >> n1 >> termos;
    while(n < termos)
    {
        cout << ricci(n0, n1, n) << ' ';
        n++;
    }
    return 0;
}