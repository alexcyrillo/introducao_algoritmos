/*Na matemática, a sequência de Fibonacci é uma sequência de números inteiros, começando normalmente por 0 e 1, na qual, cada termo subsequente corresponde à soma dos dois anteriores. A sequência recebeu o nome do matemático italiano Leonardo de Pisa, mais conhecido por Fibonacci, que descreveu, no ano de 1202, o crescimento de uma população de coelhos, a partir desta. Esta sequência já era, no entanto, conhecida na antiguidade.

Essa sequência é muito utilizada na análise de mercados financeiros, além de ter teorias de que essa é uma sequência da natureza por ter números fáceis de encontrar em frutas e plantas (Um exemplo clássico é a quantidade de diagonais formadas pelos gomos de um abacaxi).

A Sequência de Tribonacci, assemelha-se a sequência de Fibonacci em relação a como calculá-la, com os valores iniciais definidos. Sua formulação genérica é dada por:
T(n) = T(n − 1) + T(n − 2) + T(n − 3) para n >= 3, com T(1)=1, T(2) = 1, T(3) = 2.

Faça um programa que recebe um número N e que exibe os N primeiros números da sequência de Tribonacci. O programa deverá conter um subprograma que utiliza recursão para calcular a sequência de Tribonacci.

Entrada:

Número inteiro N, que corresponde a quantidade de elementos da sequência de Tribonacci que serão calculados.
Saída:

Os N primeiros elementos da sequência de Tribonacci, separados por espaço entre eles.
Exemplo de Entrada:

6
Exemplo de Saída:

1 1 2 4 7 13 
Exemplo de Entrada:

10
Exemplo de Saída:

1 1 2 4 7 13 24 44 81 149 */
#include <iostream>
using namespace std;

int tribonacci(int fator)
{
    if(fator == 0 || fator == 1)
        return 1;
    else if(fator == 2)
        return 2;
    else
        return(tribonacci(fator - 1) + tribonacci(fator - 2) + tribonacci(fator - 3));

}

int main()
{
    int fatorInicial, n = 0;
    cin >> fatorInicial;
    while(n < fatorInicial)
    {
        cout << tribonacci(n) << ' ';
        n++;
    }
    return 0;
}