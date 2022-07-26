#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, delta;
	
	
	cin >> a >> b >> c;
	
	delta = pow(b, 2) - 4 * a * c;
	if (delta < 0 )
		cout << "nenhuma raiz";
	else if (delta >= 0)
			cout << (-b - sqrt(delta)) / 2 * a << endl << (-b + sqrt(delta)) / 2 * a;

	return 0;
}
