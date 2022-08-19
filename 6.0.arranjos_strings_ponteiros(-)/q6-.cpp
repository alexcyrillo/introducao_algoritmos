#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n_palavras, tamanho = 0;
    cin >> n_palavras;
    string palavras[n_palavras];
    for(int i = 0; i < n_palavras; i++)
    {
        cin >> palavras[i];
        if(sizeof(palavras[i]) > tamanho)
            tamanho = sizeof(palavras[i]);
    }
    for(int i = 0; i < n_palavras; i++)
    {
        cout << sizeof(palavras[i]);
        if(sizeof(palavras[i]) < tamanho)
        {
            while(sizeof(palavras[i]) < tamanho)
            {
                palavras[i] = '*' + palavras[i];
                cout << "teste" ;
            }
        }
        cout << palavras[i] << endl;
    }
    return 0;
}