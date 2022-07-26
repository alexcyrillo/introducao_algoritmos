#include <iostream>
using namespace std;

int main()
{
	int D, d, i = 0;
	cin >> D >> d;

	if(d != 0)
	{
		while(D >= d)
		{
			D -= d;
			i++;
		}
		cout << i;
		     
	return 0;
	}
}

