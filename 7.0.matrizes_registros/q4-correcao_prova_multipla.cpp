/*
Faça um programa para corrigir provas de múltipla escolha de uma turma com dez alunos. Cada prova tem oito questões e cada questão vale um ponto. O primeiro conjunto de dados a ser lido é o gabarito da prova. Os outros dados são as respostas que cada aluno deu a cada questão da prova. Calcule e exiba no dispositivo de saída padrão:

A nota de cada aluno.
A percentagem de aprovação da turma, sabendo-se que a nota mínima para aprovação é 60% da prova.
Entradas:

Sequência de oito caracteres denotando o gabarito da prova.
Sequência de caracteres denotando a respostas de cada aluno. Sabendo-se que inicialmente são fornecidas todas as respostas do primeiro aluno. Depois, todas do segundo, e assim por diante.
Saídas:

Sequência de números em ponto flutuante denotando a nota final de cada aluno. Os valores da nota final devem estar compreendidos no intervalo [0,100].
Número em ponto flutuante denotando a percentagem de aprovação total da turma, o valor deve estar compreendido no intervalo [0,100].
Exemplo de entrada:

A B C D A A B E
B C D A A B E A
C D A A B E A B
D A A B E A B C
A A B E A B C D
A B E A B C D A
B E A B C D A A
B E A B C D A A 
A B C D A A B E
A B B E C D A A
A B C D A A B D
Exemplo de saída:

12.5
0
25
25
25
0
0
100
25
87.5

20
*/
#include <iostream>
using namespace std;

int main()
{
    char gabarito[8], resposta[10][8];
    float nota[10] = {0}, aprovados = 0;

    for(int i = 0; i < 8; i++)
    {
        cin >> gabarito[i];
    }
    for(int aluno = 0; aluno < 10; aluno++)
    {
        for(int alternativa = 0; alternativa < 8; alternativa++)
        {
            cin >> resposta[aluno][alternativa];
        }
        for(int alternativa = 0; alternativa < 8; alternativa++)
        {
            if(gabarito[alternativa] == resposta[aluno][alternativa])
                nota[aluno] += 1;
        }
        if(nota[aluno] >= 4.8)
        {
            aprovados += 1;
        }
    }
    for(int aluno = 0; aluno < 10; aluno++)
    {
        cout << nota[aluno] * 12.5 << endl;
    }
    cout << endl << aprovados * 10;
    return 0;
}