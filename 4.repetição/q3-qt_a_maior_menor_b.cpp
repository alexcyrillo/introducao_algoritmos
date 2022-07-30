#include <iostream>
using namespace std;

int main()
{
	int i = 0, qt_a = 0, qt_b = 0;
	char op;
	while(i < 9)
	{
		cin >> op;
		switch(op)
		{
			case 'a':
				qt_a++;
				break;
			case 'b':
				qt_b++;
				break;
		}
		i++;
	}
	if(qt_a < qt_b)
		cout << 1;
	else
		cout << 0;
}

