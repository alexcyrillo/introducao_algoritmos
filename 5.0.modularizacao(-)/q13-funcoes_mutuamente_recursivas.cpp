#include <iostream>
using namespace std;

int funcaoF(int);

int funcaoH(int x)
{
    if(x == 0)
    {
        return 0;
    }
    else
    {
        return (funcaoH(x - 1) + funcaoF(x - 1));
    }
}

int funcaoF(int x)
{
    if(x == 0)
    {
        return 1;
    }
    else if(x % 2 == 0)
    {
        return (2 * funcaoH(x) + funcaoF(x - 1));
    }
    else
    {
        return (2 * funcaoH(x) - funcaoF(x - 1));
    }
}

int main()
{
    int x;
    cin >> x;
    cout << funcaoF(x);
}