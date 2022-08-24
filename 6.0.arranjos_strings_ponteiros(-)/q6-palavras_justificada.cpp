#include <iostream>
using namespace std;

int main()
{
    int n_palavras, tamanho = 0;
    cin >> n_palavras;
    string palavras[n_palavras];
    for(int i = 0; i < n_palavras; i++)
    {
        cin >> palavras[i];
        if(palavras[i].size() > tamanho)
            tamanho = palavras[i].size();
    }
    for(int i = 0; i < n_palavras; i++)
    {
        if(palavras[i].size() < tamanho)
        {
            while(palavras[i].size() < tamanho)
            {
                palavras[i] = "*" + palavras[i];
            }
        }
        cout << palavras[i] << endl;
    }
    return 0;
}