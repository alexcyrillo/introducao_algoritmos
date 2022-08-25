/*Crie um programa que utilize uma matriz quadrada (número igual de linhas e colunas) de inteiros com dimensão fornecida pelo usuário. Esse programa, deverá realizar a leitura dos elementos que vão compor a matriz e, em seguida, deverá somar e mostrar todos os elementos que estão abaixo da diagonal secundária.

Entrada:

1. um valor inteiro indicando a dimensão da matriz quadrada;
2. uma matriz quadrada de inteiros;
Saída:

1. os elementos que estão abaixo da diagonal secundária da matriz;
2. o somatório destes elementos;*/
#include <iostream>
using namespace std;

int main()
{
    int dimensao, soma = 0;
    cin >> dimensao;
    int elemento[dimensao][dimensao];
    for(int l = 0; l < dimensao; l++)
    {
        for(int c = 0; c < dimensao; c++)
        {
            cin >> elemento[l][c];
        }
    }
    for(int l = 0; l < dimensao; l++)
    {
        for(int c = dimensao - l; c < dimensao; c++)
        {
            cout << elemento[l][c] << ' ';
            soma += elemento[l][c];
        }
    }
    cout << endl << soma;
    return 0;
}