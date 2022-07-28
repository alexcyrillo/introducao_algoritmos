#include <iostream>
using namespace std;

int main()
{
	int dia, hr, min, min_r;
	
	cin >> dia >> hr >> min >> min_r;
	if(min_r / 60 > 0)
	{
		hr += min_r / 60;
		min_r -= min_r / 60 * 60;
	}
	min += min_r;
	if(min / 60 > 0)
	{	
		hr += min / 60;
		min -= min / 60 * 60;
	}
	if(hr / 24 > 0)
	{
		dia += hr / 24;
		hr -= hr / 24 * 24;
	}
	cout << dia << ' ' << hr << ' ' << min;
	
	return 0;
}

