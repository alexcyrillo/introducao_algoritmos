#include<iostream>
using namespace std;

int valorMaior(int num, int maior)
{
    if(num > maior)
        return num;
    else
        return maior;
}

int main()
{
    int num, maior = 0;
    char conf = 'S';
    cin >> num;
    maior = num;
    maior = valorMaior(num, maior);
    cin >> conf;
    while(conf == 'S')
    {
        cin >> num;
        maior = valorMaior(num, maior);
        cin >> conf;
    }
    cout << maior;
}