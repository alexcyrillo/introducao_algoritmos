#include <iostream>
using namespace std;

int main()
{
	float bMaior, bMenor, altura, areaTrapezio;
	
	cin >> bMaior;
	cin >> bMenor;
	cin >> altura;
	
	areaTrapezio = (bMaior + bMenor) * altura / 2;
	
	cout << areaTrapezio;
	
	return 0;
}
