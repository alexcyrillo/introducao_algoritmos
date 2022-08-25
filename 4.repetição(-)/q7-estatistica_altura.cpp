/*Escreva um programa, que lê um conjunto de fichas, cada uma contendo a altura e o gênero de uma pessoa. O programa deve calcular e escrever a maior altura da turma, a menor altura da turma, a média de altura das mulheres, a média de altura dos homens e a média de altura da turma toda.

Entradas:

a quantidade de fichas (número inteiro positivo)
para cada ficha:
altura (número real positivo)
gênero (letra m ou f)
Saídas:

maior altura da turma
menor altura da turma
altura média entre as mulheres (se não houver mulheres, escrever "erro")
altura média entre os homens (se não houver homens, escrever "erro")
altura média da turma
Exemplo de Entrada:

10
1.7 m
1.67 f
1.91 f
1.72 m
1.5 m
1.76 f
2.1 f
1.8 m
1.69 f
1.67 m
Exemplo de Saída:

2.1
1.5
1.826
1.678
1.752
Exemplo de Entrada:

1
1.81 m
Exemplo de Saída:

1.81
1.81
erro
1.81
1.81*/
#include <iostream>
using namespace std;

int main()
{
	int alu_f = 0, alu_m = 0, alu_qt, i = 1;
	float alt, maior_alt, menor_alt, med_f = 0, med_m = 0, med_t = 0;
	char genero;
	cin >> alu_qt;
	do
	{
		cin >> alt >> genero;
		if(i == 1)
		{
			maior_alt = alt;
			menor_alt = alt;
		}
		med_t += alt;
		switch(genero)
		{
			case 'f':
				med_f += alt;
				alu_f++;
				break;
			case 'm':
				med_m += alt;
				alu_m++;
				break;
		}
		if(alt > maior_alt)
			maior_alt = alt;
		else if(alt < menor_alt)
			menor_alt = alt;
		i++;
	}
	while(i <= alu_qt);
	med_f /= alu_f;
	med_m /= alu_m;
	med_t /= alu_qt;
	if (alu_f == 0)
		cout << maior_alt << endl << menor_alt << endl 
	        << "erro" << endl << med_m << endl << med_t;
	else if (alu_m == 0)
		cout << maior_alt << endl << menor_alt << endl 
			  << med_f << endl << "erro" << endl << med_t;
	else
		cout << maior_alt << endl << menor_alt << endl 
			  << med_f << endl << med_m << endl << med_t;
	return 0;
}

