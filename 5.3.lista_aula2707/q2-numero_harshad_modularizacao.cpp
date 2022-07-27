#include <iostream>
using namespace std;

int somaAlg(int n){
    int soma = 0, i=1;
    do
	{
		if(n >= i and (n < i * 10))
		{
			soma += n/i;
            n %= i;
            i /= 10;
		}
		else
			i *= 10;
	}
	while(i != 1);
    return soma + n;
}

bool harshad(int n, int &resto){
    int soma = somaAlg(n);
    resto = n%soma;
    if(resto == 0)
        return true;
    else 
        return false;
}

int main(){
    int num, resto;
    cin >> num;

    if(harshad(num, resto))
        cout << resto << "sim";
    else 
        cout << resto << "nao";

    return 0;
}