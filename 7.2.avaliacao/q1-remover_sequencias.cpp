/*
Faça um programa que lê uma string (a leitura termina no primeiro caractere que seja branco) e substitui toda sequência de dois ou mais caracteres repetidos por um único caractere. A substituição deve ser feita na própria string, ou seja, não é permitido criar um segundo vetor de caracteres.

Exemplo de entrada:

aaabcabcdabaagfdfes

Exemplo de saída:

abcabcdabagfdfes

Exemplo de entrada:

abacccaxxxxi

Exemplo de saída:

abacaxi
*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    string palavra;
    cin >> palavra;
    x = palavra.size();
    for(int i = 0; i < x; i++)
    {
        if(palavra[i] == palavra[i + 1])
        {
            palavra[i] = 0;
        }
    }
    for(int i = 0; i < x; i++)
    {
        if(palavra[i] != 0)
        {
            cout << palavra[i];
        }
    }
    
    return 0;
}