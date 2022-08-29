#include <iostream>
using namespace std;


struct sorteado
{
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int s6;
};

int* maior(int *abc, int qt)
{
    int *maiorSorteado;
    for(int i = 0; i < qt * 6; i++)
    {
        
    }
    return maiorSorteado;
}

int main()
{
    int qt;
    cin >> qt;
    int *ptrSorteado, atual;
    sorteado a;
    ptrSorteado = new int[qt * 6];
    for(int i = 0; i < qt * 6; i++)
            {
                cin >> ptrSorteado[i];
            }
        int *atual = maior(ptrSorteado, qt);
        for(int k = 0; k < 6; k++)
        {

        }
    
    cout << a.s1 << ' ' << a.s2 << ' ' << a.s3 << ' ' << a.s4 << ' ' << a.s5 << ' ' << a.s6;
    return 0;
}