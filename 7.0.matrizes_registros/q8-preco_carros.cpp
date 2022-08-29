/*
Elabore um programa que leia uma quantidade de carros e:

Crie um vetor com os dados carros (cada carro tem um nome, ano e preço).
Leia um preço de referência e mostre as informações de todos os carros com preço menor (na ordem em que foram lidos).
Obs: considere que sempre existirá pelo menos um carro com preço menor que o de referência.

Entradas:

A quantidade de carros.
Os dados de cada carro:
nome (texto sem espaços, menor que 20 caracteres),
ano (número inteiro) e
preço (número inteiro).
O preço de referência (número inteiro).
Saídas:

Em cada linha todos os dados (respectivamente nome, ano e preço) dos carros cujos preços são menores que a referência.
Exemplo de Entrada:

4
Fusca	1976	8000
Gol	1995	12000
Palio	2000	13500
Ka	2012	20000
13000
Exemplo de Saída:

Fusca	1976	8000
Gol	1995	12000
*/
#include <iostream>
using namespace std;

struct carro
{
    string nome;
    int ano;
    int preco;
};

int main()
{
    int qt, precoRef;
    cin >> qt;
    carro dadosVeiculo[qt];
    for(int i = 0; i < qt; i++)
    {
        cin >> dadosVeiculo[i].nome >> dadosVeiculo[i].ano >> dadosVeiculo[i].preco;
    }
    cin >> precoRef;
    for(int i = 0; i < qt; i++)
    {
        if(precoRef > dadosVeiculo[i].preco)
        {
            cout << dadosVeiculo[i].nome << ' ' << dadosVeiculo[i].ano << ' ' << dadosVeiculo[i].preco << endl;
        }
    }
    return 0;
}