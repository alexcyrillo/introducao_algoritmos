#include <iostream>
using namespace std;

int main()
{
	int numerador, denominador;
	
	cin >> numerador >> denominador;
	
	if (denominador != 0)
		{
			cout << numerador / denominador << endl << numerador % denominador;
		}
	else 
		cout << "erro";
		
	return 0;
}
