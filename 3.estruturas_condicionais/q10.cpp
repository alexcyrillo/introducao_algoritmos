#include <iostream>
using namespace std;

int main()
{
	double num1, num2;
	int op;
	
	cin >> num1 >> num2 >> op;
	
	switch(op)
	{
		case 1: 
			cout << (num1 + num2) / 2;
			break;
		case 2:
			if (num1 > num2)
				cout << num1 - num2;
			else
				cout << num2 - num1;
			break;
		case 3:
			cout << num1 * num2;
			break;
		case 4:
			if (num2 != 0)
				cout << num1 / num2;
			else
				cout << "ERRO";
			break;
		default:
			cout << "ERRO";
	}

	return 0;
}
