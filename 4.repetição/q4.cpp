#include <iostream>
using namespace std;

int main()
{
	int lin = 1, col = 1, input;
	char letra = 97;
	cin >> input;
	while(lin <= input)
	{	
		while(col <= lin)
		{
			cout << letra << ' ';
			letra ++;
			col++;
		}
		cout << endl;
		col = 1;
		letra = 97;
		lin++;
	}		
	return 0;
}

