/*Implemente um programa que receba um número que represente o tempo em milissegundos que se passou desde as 00 : 00 : 00 (HORAS : MINUTOS : SEGUNDOS) horas de um dia. O seu programa deve imprimir na saída padrão a hora representada por este número de milissegundos.

Entradas:

Número inteiro representando o tempo em milissegundos.
Saída:

Tempo convertido para o formato "HORAS : MINUTOS : SEGUNDOS", conforme essa formatação (itens separados por espaço), em que HORAS e MINUTOS são números inteiros e SEGUNDOS um número real.
*/

#include <iostream>
//#include <iomanip>
using namespace std;
int main(){
	int hr, min, ms;
	float s;
	
	cin >> ms;
	hr = ms / 3600000;
	min = (ms - hr * 3600000) / 60000;
	s = (ms - (hr * 3600000 + min * 60000)) / 1000; 

	cout << hr << " : " << min << " : ";
	cout.precision(1);
	cout.setf(ios::fixed);
	cout << s;
	
	/*cout << hr << " : " << min << " : ";
	cout << fixed << setprecision(1);
	cout << s;*/

	return 0;
}
