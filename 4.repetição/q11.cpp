#include <iostream>
using namespace std;

int main()
{
	int dim, lin = 1, col = 1;
	cin >> dim;
	while(col <= dim)
	{
		lin = 1;
		while(lin <= dim)
		{
			if ((lin + col) % 2 == 0)
				cout << '.';
			else
				cout << '#';
			lin ++;
		}
		col++;
		cout << endl;
	}
	return 0;
}

