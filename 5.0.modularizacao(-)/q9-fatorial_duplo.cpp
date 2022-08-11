#include <iostream>
using namespace std;

int fatorialDupla(int n)
{
    if( n == 0 || n == 1)
        return 1;
    else
    {
        n -= 2;
        return((n + 2) * fatorialDupla(n));
    }
}

int main()
{
    int fatorial;
    cin >> fatorial;
    cout << fatorialDupla(fatorial);
    return 0;
}