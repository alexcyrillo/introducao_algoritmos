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
#include <cstring>
using namespace std;

int main()
{
    int x;
    string palavra = "\0";
    bool teste;
    cin >> palavra;
    x = palavra.size();
    for(int i = 1; i < x; i++)
    {
        if(palavra[i] == palavra[i - 1])
            teste = 1;
        else
            teste = 0;
        while(teste)
        {
            for(int j = i; j < x; j++)
            {
                palavra[j] = palavra[j - 1];
                palavra[x] = '\0';
            }
            if(palavra[i] == palavra[i - 1])
                teste = 1;
            else
                teste = 0;
        }
    }
    cout << palavra;
    return 0;
}



    /*int x, i = 0;
    string palavra, final = "\0";
    cin >> palavra;
    x = palavra.size();
    while(i < x)
    {
        if(palavra[i] != palavra[i + 1])
        {
            final += palavra[i];
        }
        i++;
    }
    cout << final;
    return 0;
}*/
