/*
Faça um programa que lê números inteiros de um arquivo e separa esses números em dois outros arquivos: um com todos os números pares e outro com todos os números ímpares.

O arquivo com todos os números deve ser chamado numeros (sem acento) e o seu programa não deve tentar criar esse arquivo.

O arquivo com os números pares deve ser chamado pares e o arquivo com os números ímpares deve ser chamado impares (sem acento).

A ordem dos números deve ser mantida conforme estava. Observe a ordem dos números no exemplo.

Exemplo de Entrada (conteúdo do arquivo numeros):

1 3 2 4 9 7 8 2 4 5
Exemplo de Saída:

Conteúdo do arquivo pares:
2 4 8 2 4
Conteúdo do arquivo impares:
1 3 9 7 5
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream leitura("numeros");
    ofstream escritaP("pares"), escritaI("impares");
    int num;
    if(leitura)
        while(leitura >> num)
        {
            if(num % 2 == 0)
            {
                escritaP << num << ' ';
                
            }
            else
            {
                escritaI << num << ' ';
                
            }
        }
    escritaP.close();
    escritaI.close();
    return 0;
}