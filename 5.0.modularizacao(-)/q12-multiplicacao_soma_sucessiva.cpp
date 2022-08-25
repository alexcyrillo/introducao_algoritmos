/*(BACKES,2012) A multiplicação de dois números naturais pode ser feita através de somas sucessivas (por exemplo, 2*3=2+2+2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois números naturais.

Entradas:

Dois números naturais.
Saídas:

Resultado da multiplicação dos dois números.
Exemplo de Entrada:

3 5
Exemplo de Saída:

15*/
#include <iostream>
using namespace std;

int multiplicacao(int a, int b)
{
    if(b == 0)
        return 0;
    if(b == 1)
        return a;
    else
        return (a + multiplicacao(a, b - 1));
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << multiplicacao(a, b);
    return 0;
}