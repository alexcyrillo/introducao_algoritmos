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

