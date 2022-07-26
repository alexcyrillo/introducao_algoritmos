#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, i, j = 1;
	do
	{
		cin >> j;
		i = j;
		while(i > 0)
		{
			cin >> a >> b >> c >> d >> e;
				if(a >= 0 and a <= 127 and b > 127 and c > 127 and d > 127 and e > 127)
					cout << 'A' << endl;
				else if(b >= 0 and b <= 127 and a > 127 and c > 127 and d > 127 and e > 127)
					cout << 'B' << endl;
				else if(c >= 0 and c <= 127 and a > 127 and b > 127 and d > 127 and e > 127)
					cout << 'C' << endl;
				else if(d >= 0 and d <= 127 and a > 127 and b > 127 and c > 127 and e > 127)
					cout << 'D' << endl;
				else if(e >= 0 and e <= 127 and a > 127 and b > 127 and c > 127 and d > 127)
					cout << 'E' << endl;
				else
					cout << '*' << endl;
			i--;
		}
	}while(j > 0);
	return 0;
}

