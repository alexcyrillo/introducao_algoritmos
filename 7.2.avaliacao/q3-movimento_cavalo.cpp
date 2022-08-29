#include <iostream>
using namespace std;

int main()
{
    int x, posCav[2], peoes = 0;
    cin >> x;
    int tabuleiro[x][x];
    for(int l = 0; l < x; l++)
    {
        for(int c = 0; c < x; c++)
        {
            cin >> tabuleiro[l][c];
            if(tabuleiro[l][c] == 1)
            {
                posCav[0] = l;
                posCav[1] = c;  
            }
        }
    }
    //if(posCav[0] > 1 and posCav[0] < x - 2 and posCav[1] > 1 and posCav[1] < x - 2)
    
        if(tabuleiro[posCav[0] - 2][posCav[1] - 1] == 2 && posCav[0] > 1 && posCav[1] > 0)
            peoes++;
        if(tabuleiro[posCav[0] - 1][posCav[1] - 2] == 2 && posCav[0] > 0 && posCav[1] > 1)
            peoes++;
        if(tabuleiro[posCav[0] - 2][posCav[1] + 1] == 2 && posCav[0] > 1 && posCav[1] < x - 1)
            peoes++;
        if(tabuleiro[posCav[0] - 1][posCav[1] + 2] == 2 && posCav[0] > 0 && posCav[1] < x - 2)
            peoes++;
        if(tabuleiro[posCav[0] + 1][posCav[1] - 2] == 2 && posCav[0] < x - 1 && posCav[1] > 1)
            peoes++;
        if(tabuleiro[posCav[0] + 2][posCav[1] - 1] == 2 && posCav[0] < x - 2 && posCav[1] > 0)
            peoes++;
        if(tabuleiro[posCav[0] + 2][posCav[1] + 1] == 2 && posCav[0] < x - 2 && posCav[1] < x - 1)
            peoes++;
        if(tabuleiro[posCav[0] + 1][posCav[1] + 2] == 2 && posCav[0] < x - 1 && posCav[1] < x - 2)
            peoes++;
    cout << peoes;
    return 0;
}