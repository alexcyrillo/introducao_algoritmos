#include <iostream>
using namespace std;

int tribonacci(int fator)
{
    if(fator == 0 || fator == 1)
        return 1;
    else if(fator == 2)
        return 2;
    else
        return(tribonacci(fator - 1) + tribonacci(fator - 2) + tribonacci(fator - 3));

}

int main()
{
    int fatorInicial, n = 0;
    cin >> fatorInicial;
    while(n < fatorInicial)
    {
        cout << tribonacci(n) << ' ';
        n++;
    }
    return 0;
}