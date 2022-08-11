#include <iostream>
using namespace std;

int main()
{
	float x1, x2, y1, y2, coord;
	char eixo;
	cin >> x1 >> y1 >> x2 >> y2 >> eixo >> coord;
	if((eixo == 'x' and ((coord > x1 and coord < x2) or (coord > x2 and coord < x1))) or 
	   (eixo == 'y' and ((coord > y1 and coord < y2) or (coord > y2 and coord < y1))))
	{
		switch(eixo)
		{
			case 'x':
				if(y1 - y2 == 0)
					cout << coord;
				else
					cout << (y1 - y2) * coord / (x1 - x2);
			break;
			case 'y':
				if(x1 - x2 == 0)
					cout << coord;
				else
					cout << (x1 - x2) * coord / (y1 - y2);
			break;
		}
	}
	else
		cout << "nenhuma";
	return 0;
}

