#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int tripulacao;
	float caravelas;
	
	cin >> tripulacao;
	
	tripulacao -= 1000;
	//retirando numero de pessoas que irao em naus
	caravelas = tripulacao / 80.0;
	
	cout << ceil(caravelas);
	
	return 0;
}
