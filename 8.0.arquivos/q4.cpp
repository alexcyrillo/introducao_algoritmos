#include <iostream>
#include <fstream>
using namespace std;

bool verifPrimo(int n)
{
    unsigned cont = 0;
    if(n >= 1)
    {
        for(int i = 2; i <= n; i++)
        {
            if(n % i == 0)
                cont++;
        }
        if(cont == 1 || n == 1)
            return 1;
    }
    return 0;
}

int main()
{
    ifstream leitura("inteiros.dat");
    ofstream escrita("primos.dat"), escritaN("primos.txt");
    
    int tam, *num, a, p = 0, *primo;
    bool verif;

    if(leitura)
    {
        leitura.read((char *)(&tam), sizeof(int));
        num = new int[tam];
        while(leitura)
            for(int i = 0; i < tam; i++)
            {
                leitura.read((char *)(&num[i]), sizeof(int));
            }
        for(int i = 0; i < tam; i++)
            {
                verif = verifPrimo(num[i]);
                if(verif)
                {
                    escrita.write((char *)(&num[i]), sizeof(int));
                    escritaN << num[i];
                    p++;
                }
            }
    }
    return 0;
}