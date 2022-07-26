#include <iostream>
using namespace std;

int main()
{
	float media;
	
	cin >> media;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	if (media >= 1600)
		cout << media << endl << media * 0.30 ;
	else if (media < 1600 and media >= 800)
		cout << media << endl << media * 0.25;
	else if (media < 800 and media >= 400)
		cout << media << endl << media * 0.20;
	else if (media < 400 and media >= 200)
		cout << media << endl << media * 0.15;
	else if (media < 200 and media >= 0)
		cout << media << endl << media * 0.10;
	else
		cout << media << endl << "0";
		
	return 0;
}
