#include <iostream>
using namespace std;

int verificarValidade(int vetor[], int qt_elementos)
{
    int qt_final = qt_elementos;
    for(int i = 0; i < qt_elementos; i++)
    {
        if(vetor[i] % 3 == 0)
        {
            vetor[i] = -1;
            qt_final--;
        }
    }
    return qt_final;
}


int main()
{
    int qt_elementos, qt_final;
    cin >> qt_elementos;
    int vetor[qt_elementos];
    for(int i = 0; i < qt_elementos; i++)
    {
        cin >> vetor[i];
    }
    qt_final = verificarValidade(vetor, qt_elementos);
    for(int i = 0; i < qt_elementos; i++)
    {
        if(vetor[i] != -1)
            cout << vetor[i] << ' ';
    }
    cout << endl << qt_final;
    return 0;
}