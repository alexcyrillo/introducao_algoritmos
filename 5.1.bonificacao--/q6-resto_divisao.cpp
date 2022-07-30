#include<iostream>
using namespace std;

int main()
{   
    int dividendo, divisor, q = 0, r = 0;
    cin >> dividendo >> divisor; 
    while(dividendo >= divisor)
    {
        dividendo -= divisor;
        q++;
    }
    cout << dividendo << endl << q;
    return 0;
}