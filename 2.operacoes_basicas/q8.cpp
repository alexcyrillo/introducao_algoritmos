#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int valor;
	
	cin >> valor;
	
	cout << valor / 100 << endl 
		 << valor % 100 / 50 << endl
		 << valor % 100 % 50 / 20 << endl
		 << valor % 100 % 50 % 20 / 10 << endl
		 << valor % 100 % 50 % 20 % 10 / 5 << endl
		 << valor % 100 % 50 % 20 % 10 % 5 / 2 << endl
		 << valor % 100 % 50 % 20 % 10 % 5 % 2 << endl;
	
	
	return 0;
}
