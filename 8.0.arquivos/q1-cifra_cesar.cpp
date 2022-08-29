/*
A cifra de César é uma forma de criptografia antiga, onde cada letra de uma determinada mensagem é trocada pela letra que a sucede em 3 posições. Por exemplo, a palavra AJUDA seria transformada em DMXGD. Escreva uma função que leia um arquivo texto e escreva a cifra de César correspondente em um outro arquivo texto.

A letra X é trocada por A, Y por B e Z por C.

O programa deve ler um nome de arquivo da entrada padrão, e aplicar a cifra de César em seu conteúdo, escrevendo o resultado num arquivo cujo nome é "cifrado". Suponha que no arquivo de entrada só existem letras maiúsculas sem qualquer tipo de acentos, além espaços e finais de linha. Os caracteres brancos não podem ser modificados.

Entradas:

Nome de um arquivo a ser lido (não há espaços no nome).
Conteúdo do arquivo informado.
Saída:

Um arquivo cujo nome é "cifrado", contendo o resultado da aplicação da cifra ao conteúdo do arquivo da entrada.
Exemplo de entrada (conteúdo do arquivo):

GALLIA EST OMNIS DIVISA IN PARTES TRES
QUARUM UNAM INCOLUNT BELGAE
Exemplo de saída (conteúdo do arquivo cujo nome é "cifrado"):

JDOOLD HVW RPQLV GLYLVD LQ SDUWHV WUHV
TXDUXP XQDP LQFROXQW EHOJDH
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string arqR;
    char dados;
    cin >> arqR;
    ifstream leitura(arqR);
    ofstream escrita("cifrado");
    
    if(leitura)
    {
        while(leitura.get(dados))
        {
            if(dados == 88)
                escrita << char(65);
            else if(dados == 89)
                escrita << char(66);
            else if(dados == 90)
                escrita << char(67);
            else if(dados == 32 || dados == 10)
                escrita << char(dados);
            else
                escrita << char(dados + 3);
        }
    }

}