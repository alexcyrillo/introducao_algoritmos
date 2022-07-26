#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float derrapagem, veloc;
	
	cin >> derrapagem;
	
	veloc = 14.6 * sqrt(derrapagem);
	
	cout.precision(3);
	cout.setf(ios::fixed);
	cout << veloc;

	return 0;
}
