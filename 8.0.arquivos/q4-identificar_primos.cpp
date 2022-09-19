/*
Considere o arquivo binário de entrada "inteiros.dat", que armazena uma sequência de números inteiros positivos e negativos. Escreva um programa que leia os dados armazenados no arquivo considerando que:

o primeiro valor armazenado indica a quantidade de números inteiros armazenados;
os demais valores são os elementos armazenados.
Seu programa deve:
ler os dados do arquivo e armazená-los em um vetor;
utilizar um módulo para identificar se um dado valor é primo ou não;
armazenar todos os números primos lidos do arquivo "inteiros.dat" em um outro arquivo binário de saída "primos.dat", sendo que o primeiro dado lido indicará quantos números primos serão gravados, e os demais são os valores primos propriamente ditos.
Considere que o arquivo pode conter números repetidos mas aqueles que forem primos devem ser considerados apenas uma vez para a gravação do arquivo de saída. Caso não haja nenhum valor primo, o arquivo de saída deve conter apenas o valor 0 indicando que nenhum primo será gravado.
Entradas:

Quantidade de elementos do vetor lido do arquivo "inteiros.dat"
Números inteiros lidos do arquivo e armazenados no vetor.
Saídas:

Quantidades de números primos a serem gravados no arquivo "primos.dat".
Números primos gravados no arquivo "primos.dat"
Exemplo de Entrada:

10 9 -4 5 27 1 98 44 15 2 3
Exemplo de Saída:

4 5 1 2 3
Exemplo de Entrada:

5 9 -2 7 -18 7
Exemplo de Saída:

1 7
Exemplo de Entrada:

4 -7 27 18 66
Exemplo de Saída:

0
*/
#include <iostream>
#include <fstream>
using namespace std;

bool verifPrimo(int n)
{
    unsigned cont = 0;
    if(n >= 1)
    {
        for(int i = 2; i <= n; i++)
        {
            if(n % i == 0)
                cont++;
        }
        if(cont == 1 || n == 1)
            return 1;
    }
    return 0;
}

int main()
{
    ifstream leitura("inteiros.dat");
    ofstream escrita("primos.dat");
    
    int tam, *lido, p = 0, *primo;
    bool unico = 1;

    if(leitura)
    {
        leitura.read((char *)(&tam), sizeof(int));
        lido = new int[tam];
        primo = new int[tam];
        while(leitura)
        {
            for(int i = 0; i < tam; i++)
                leitura.read((char *)(&lido[i]), sizeof(int));
        }
        for (int i = 0; i < tam; i++)
        {
            if(verifPrimo(lido[i]))
            {
                for(int j = 0; j < p; j++)
                {
                    if(lido[i] == primo[j])
                        unico = 0;
                }
                if(unico)
                {
                    primo[p] = lido[i];
                    p++;
                }
            }
        }
        if(p == 0)
            escrita.write((const char *)(&p), sizeof(int));
        else
        {
            escrita.write((const char *)(&p), sizeof(int));
            for(int i = 0; i < p; i++)
                escrita.write((const char *)(&primo[i]), sizeof(int));
        }
    }
    return 0;
}