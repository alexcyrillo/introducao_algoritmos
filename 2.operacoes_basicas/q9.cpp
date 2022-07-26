#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int hr, min, ms;
	float s;
	
	cin >> ms;
	hr = ms / 3600000;
	min = (ms - hr * 3600000) / 60000;
	s = (ms - (hr * 3600000.0 + min * 60000.0)) / 1000.0; 

	cout << hr << " : " << min << " : ";
	cout.precision(1);
	cout.setf(ios::fixed);
	cout << s;
}	
