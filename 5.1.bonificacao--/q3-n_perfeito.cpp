#include <iostream>
using namespace std;

int main() 
{
    int num = 1, i, soma;
    while(num != -1)
    {
        cin >> num;
        i = 2;
        soma = 1;
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
        else if(num != -1)
        {
            cout << "nao perfeito" << endl;
        }
    } 
    return 0;
}