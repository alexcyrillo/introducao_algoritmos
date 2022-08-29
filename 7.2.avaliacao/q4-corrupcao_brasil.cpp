#include <iostream>
using namespace std;

struct lStruct
{
    string nome;
    string partido;
};

struct opStruct
{
    string op;
    string nomeladrao;
    int desviado;
};

int main()
{
    int qtLadrao, qtOp, desviadoTotal = 0;
    string partPesq, opPesq;
    cin >> qtLadrao;
    lStruct ladrao[qtLadrao];
    for(int i = 0; i < qtLadrao; i++)
    {
        cin >> ladrao[i].partido >> ladrao[i].nome;
    }
    cin >> qtOp;
    opStruct operacao[qtOp];
    for(int i = 0; i < qtOp; i++)
    {
        cin >> operacao[i].op >> operacao[i].nomeladrao >> operacao[i].desviado;
    }
    cin >> partPesq >> opPesq;
    for(int i = 0; i < qtOp; i++)
    {
        if(opPesq == operacao[i].op)
            for(int j = 0; j < qtLadrao; j++)
            {
                if(partPesq == ladrao[j].partido && ladrao[j].nome == operacao[i].nomeladrao)
                    desviadoTotal += operacao[i].desviado;
            }
    }
    cout << desviadoTotal;
    return 0;
}