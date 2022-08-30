/*
Escreva um programa para ler um arquivo de texto (agenda.txt) com os dados de N pessoas. Os dados devem ser armazenados utilizando a sequinte estrutura:

struct amigo{
     string nome;
     int idade;
     float altura;
     string telefone;
};
Faça um programa que leia os dados dos registos e salve-os em um arquivo denominado saida.txt utilizando uma saída formatada mostrada a seguir.

--------
[nome] tem [idade] anos e [altura] de altura.
Tel.: [telefone].
--------
Obs.: O nome da pessoa não poderá ter espaços.

Entrada:
Arquivo de texto com conteúdo semelhante a esse:

Joao
25
1.75
03538325648
Junior
23
1.85
03538385948
Saída:
Arquivo de texto com conteúdo semelhante a esse:

--------
Joao tem 25 anos e 1.75 de altura.
Tel.: 03538325648.
--------
--------
Junior tem 23 anos e 1.85 de altura.
Tel.: 03538385948.
--------
*/
#include <iostream>
#include <fstream>
using namespace std;

struct amigo
{
    string nome;
    int idade;
    float altura;
    string telefone;
};

int main()
{
    ifstream leitura("agenda.txt");
    ofstream escrita("saida.txt");
    amigo dados;
        while(leitura >> dados.nome >> dados.idade >> dados.altura >> dados.telefone)
        {
            escrita << "--------\n" << dados.nome << " tem " << dados.idade << " anos e " << dados.altura << " de altura.\nTel.:" << dados.telefone << ".\n--------\n";
        }
    return 0;
}