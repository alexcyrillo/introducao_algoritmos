#include <iostream>
using namespace std;

void imprimeVetor(int nros[], int nrosLidos)
{
    if(nrosLidos == 0)
        cout << "[]";
    else
    {
        cout << '[';
        for(int i = 0; i < nrosLidos - 1; i++)
        {
            cout << nros[i] << ", ";
        }
        cout << nros[nrosLidos - 1] << ']' << endl;
    }
}

int main()
{
    int nrosLidos;
    cin >> nrosLidos;
    int vetorNros[nrosLidos];
    for(int i = 0; i < nrosLidos; i++)
    {
        cin >> vetorNros[i];
    }
    imprimeVetor(vetorNros, nrosLidos);
    return 0;
}
