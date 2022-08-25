/*
Um jogo bastante conhecido é o jogo da velha, jogado por dois jogadores onde cada um escolhe uma marcação X ou O, assim cada jogador faz uma marca por vez em uma matriz 3x3, se um jogador conseguir 3 de suas marcações formando uma linha seja ela verticalmente, horizontalmente ou diagonalmente ele será o vencedor. Caso o jogo chegue em um estágio onde não existem mais espaços vazios para se fazer marcações é dito que ocorreu velha (empate).

Faça um programa que receba uma matriz 3x3 e verifique qual lado foi vencedor no jogo da velha. Seu programa deverá escrever na saída padrão quem ganhou (escreverá X se esse for o vitorioso ou O caso contrário) e também deverá escrever as posições que originaram essa vitória. Caso não exista um vencedor seu programa deverá escrever -1.

Entradas:

Matriz 3x3 de caracteres composta por um jogo já terminado em que "X" e "O" representam espaços marcados e "." representa espaços não marcados.
Saídas:

Quem foi o vencedor ( X ou O) seguido das posições originaram essa vitória. As posições são escritas da esquerda para a direita e de cima para baixo. Caso não exista um vencedor escreva apenas -1.
Exemplo de Entrada:

X . O
X O .
X . .
Exemplo de Saída:

X
0 0
1 0
2 0
Exemplo de Entrada:

X O O
O X X
O X O
Exemplo de Saída:

-1
*/
#include <iostream>
using namespace std;

int main()
{
    char velha[3][3];
    bool imp = 1;
    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 3; c++)
        {
            cin >> velha[l][c];
        }
    }
    if((velha[0][2] == velha[1][1]) && (velha[0][2] == velha[2][0]))
    {
        cout << velha[0][2] << endl << "0 2" << endl << "1 1" << endl << "2 0";
    }
    else if((velha[0][0] == velha[1][1]) && (velha[0][0] == velha[2][2]))
    {
        cout << velha[0][0] << endl << "0 0" << endl << "1 1" << endl << "2 2";
    }
    else
    {
        for(int x = 0; x < 3; x++)
        {
            if((velha[x][0] == velha[x][1]) && (velha[x][0] == velha[x][2]))
            {
                cout << velha[x][0] << endl << x << " 0" << endl << x << " 1" << endl << x << " 2";
                imp = 0;
            }
            else if((velha[0][x] == velha[1][x]) && (velha[0][x] == velha[2][0]))
            {
                cout << velha[0][x] << endl << "0 " << x << endl << "1 " << x << endl << "2 " << x;
                imp = 0;
            }
        }
        if(imp)
            cout << "-1";
    }
    return 0;
}