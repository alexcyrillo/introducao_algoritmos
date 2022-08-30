#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream escrita("inteiros.dat");
    int tam, a;
    cin >> tam;
    escrita.write((char *)(&tam), sizeof(int));
    for(int i = 0; i < tam; i++)
    {
        cin >> a;
        escrita.write((char *)(&a), sizeof(int));
    }
    return 0;
}