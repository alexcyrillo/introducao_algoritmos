//Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Depois, copie os números pares num vetor e os números ímpares em outro. Imprima o vetor de pares e o vetor de ímpares. A ordem dos elementos deve permanecer inalterada.
#include <iostream>
using namespace std;

int main()
{
    int num[20] = {0}, par[20] = {0}, impar[20] = {0}, p = 0, i = 0;
    for(int j = 0; j < 20; j++)
    {
        cin >> num[j];
        if(num[j] % 2 == 0)
        {
            par[p] = num[j];
            p++;
        }
        else
        {
            impar[i] = num[j];
            i++;
        }
    }
    for(int j = 0; j < p; j++)
    {
        cout << par[j] << ' ';
    }
    cout << endl;
    for(int j = 0; j < i; j++)
    {
        cout << impar[j] << ' ';
    }
    return 0;
}