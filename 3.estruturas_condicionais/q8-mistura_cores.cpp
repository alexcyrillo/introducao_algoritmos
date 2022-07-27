#include <iostream>
using namespace std;

int main()
{
	string cor1, cor2;
	
	cin >> cor1 >> cor2;
	
	if (cor1 == cor2)
		cout << cor1;
	else if (cor1 == "azul")
		{
			if (cor2 == "amarelo")
				cout << "verde";
			else if (cor2 == "vermelho")
				cout << "violeta";
		}
	else if (cor1 == "amarelo")
		{
			if (cor2 == "azul")
				cout << "verde";
			else if (cor2 == "vermelho")
				cout << "laranja";
		}
	else if (cor1 == "vermelho")
		{
			if (cor2 == "amarelo")
				cout << "laranja";
			else if (cor2 == "azul")
				cout << "violeta";
		}
				
	return 0;
}
