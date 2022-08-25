/*
Uma matriz quadrada A de números inteiros e tamanho N é uma matriz de permutação se em cada linha e em cada coluna houver (N-1) elementos nulos (iguais a zero) e um único elemento igual a 1. Escreva um programa que dada uma matriz quadrada de tamanho 4 determina se a mesma é uma matriz de permutação ou não. Seu programa deve retornar como saída a palavra “sim” caso a entrada seja uma matriz de permutação ou a palavra “nao”, caso contrário.

Obs.: Vetores em Python são implementados como listas cujos elementos são todos homogêneos.
Obs. 2: Matrizes em Python são implementadas como uma lista composta por listas cujos elementos são todos homogêneos.

Entradas:

Valores inteiros de uma matriz 4x4.
Saídas:

”sim” ou “nao” (todas as letras em minusculas e sem acentuação).
Exemplo de entrada:

0 1 0 0
1 0 0 0
0 0 1 0
0 0 0 1
Exemplo de saída:

sim
Exemplo de entrada:

0 1 4 0
1 0 0 0
0 1 2 0
0 0 0 1
Exemplo de saída:

nao
*/
#include <iostream>
using namespace std;

int main()
{
    int matriz[4][4];
    bool confL[4] = {0}, confC[4] = {0};
    for(int l = 0; l < 4; l++)
    {
        for(int c = 0; c < 4; c++)
        {
            cin >> matriz[l][c];
        }
    }
    for(int l = 0; l < 4; l++)
    {
        if(matriz[l][0] + matriz[l][1] + matriz[l][2] + matriz[l][3] == 1)
            confL[l] = 1;
        else
            confL[l] = 0;
        if(matriz[0][l] + matriz[1][l] + matriz[2][l] + matriz[3][l] == 1)
            confC[l] = 1;
        else
            confC[l] = 0;
    }
    if(confC[0] && confC[1] && confC[2] && confC[3] && confL[0] && confL[1] && confL[2] && confL[3])
        cout << "sim";
    else
        cout << "nao";
    return 0;
}