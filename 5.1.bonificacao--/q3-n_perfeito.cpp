#include <iostream>
using namespace std;

int main() 
{
    int num = 1, i = 1, soma = 0;
    while(num > 0)
    {
        cin >> num;
        while(i <= num / 2 and num > 0)
        {
            if(num % i == 0)
                soma += i;
            i++;
        }
        if(num == soma)
        {
            cout << "perfeito" << endl;
        }
        else if(num > 0)
        {
            cout << "nao perfeito" << endl;
        }
        i = 1;
        soma = 0;
    } 
    return 0;
}