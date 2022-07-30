#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const float PI = 3.14159265358;

int main()
{
	int cadeira, i = 0;
	float ang, raio, pos_x, pos_y;
	cout << fixed << setprecision(2);
	cin >> raio >> cadeira;
	ang = 2 * PI/cadeira;
	while(i < cadeira)
	{
		pos_x = raio * cos(i * ang);
		pos_y = raio * sin(i * ang);
		cout << pos_x << ' ' << pos_y << endl;
		i++;
	}
	return 0;
}

