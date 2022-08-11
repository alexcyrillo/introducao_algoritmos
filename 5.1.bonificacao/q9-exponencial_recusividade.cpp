#include<iostream>
using namespace std;

int exponencial(int k, int n)
{
    if(n == 1)
        return k;
    else 
    {
        n--;
        return (k * exponencial(k, n));
    }
}

int main()
{
    int k, n;
    cin >> k >> n;
    cout << exponencial(k, n);
    return 0;
}