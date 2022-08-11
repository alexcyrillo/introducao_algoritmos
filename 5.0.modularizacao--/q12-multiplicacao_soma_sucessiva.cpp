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