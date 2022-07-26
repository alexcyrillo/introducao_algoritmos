#include <iostream>
using namespace std;

string convMes(int n)
{
	string mes;
	switch(n)
	{
		case 1:
			mes = "janeiro";
		break;
		case 2:
			mes = "fevereiro";
		break;
		case 3:
			mes = "marco";
		break;
		case 4:
			mes = "abril";
		break;
		case 5:
			mes = "maio";
		break;
		case 6:
			mes = "junho";
		break;
		case 7:
			mes = "julho";
		break;
		case 8:
			mes = "agosto";
		break;
		case 9:
			mes = "setembro";
		break;
		case 10:
			mes = "outubro";
		break;
		case 11:
			mes = "novembro";
		break;
		case 12:
			mes = "dezembro";
		break;
		default:
			mes = "erro";
	}
	return mes;
}

int main()
{
	int mes;
	cin >> mes;
	cout << convMes(mes);
	return 0;
}

