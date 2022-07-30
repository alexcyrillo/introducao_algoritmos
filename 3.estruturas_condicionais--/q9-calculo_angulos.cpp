#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int op;
	double ang1, ang2;
	
	cin >> op;
	
	switch (op)
	{
		case 1:
			cin >> ang1;
			ang2 = ang1 * M_PI / 180;
			cout << sin(ang2);
		break;	
		case 2:
			cin >> ang1;
			ang2 = ang1 * M_PI / 180;
			cout << cos(ang2);
		break;
		case 3:
			cin >> ang1 >> ang2;
			cout << ang1 * ang2;
		break;
	}
	
	return 0;
}
