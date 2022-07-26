/*O Duende Verde capturou a Mary Jane. Para atrair o homem-aranha para a
  armadilha, ele enviou ao Peter Parker um número com quatro dígitos. Depois
  de muito pensar, Peter Parker descobriu que a soma do primeiro e do último
  dígitos indicam a latitude e a soma do segundo e do terceiro dígitos
  indicam a longitude da localização onde eles estão.

Dado um número com quatro dígitos, faça um programa para calcular a latitude e a longitude da localização.

Entradas:

Número inteiro com quatro dígitos.
Saídas:

Valor da latitude;
Valor da longitude.*/
#include <iostream>
using namespace std;
int main(){
	int coord, lat, lon, mil, cen, dez, un;
	
	cin >> coord;
	mil = (coord / 1000);
	cen = (coord - mil * 1000) / 100;
	dez = (coord - (mil * 1000 + cen * 100)) / 10;
	un = coord - (mil * 1000 + cen * 100 + dez * 10);
	
	lat = mil + un;
	lon = cen + dez;
	
	cout << lat << endl << lon;

	return 0;
}
