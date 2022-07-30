#include<iostream>
using namespace std;

int main()
{
    int valor1, valor2, valor3, valor4, num, par = 0, impar = 0;
    cin >> valor1 >> valor2 >> valor3 >> valor4;
    do
    {
        cin >> num;
        if(((num >= 1 and num < valor1) or (num >= valor2 and num < valor3)) and (num % 2 == 0))
        {
            par++;
        }
        else if(((num >= valor1 and num < valor2) or (num >= valor3 and num < valor4)) and (num % 2 != 0))
        {
            impar++;
        }
    } 
    while (num > 0);
    cout << par << endl << impar; 
    return 0;
}