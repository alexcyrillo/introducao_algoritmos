#include <iostream>
#include <fstream>
using namespace std;

struct amigo
{
    string nome;
    int idade;
    float altura;
    string telefone;
};

int main()
{
    ifstream leitura("agenda.txt");
    ofstream escrita("saida.txt");
    string dado;
    if(leitura)
    {
        while(getline(leitura, dado))
    }

    return 0;
}