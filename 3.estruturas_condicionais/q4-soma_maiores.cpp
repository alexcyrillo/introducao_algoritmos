#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3, n4, alt;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	if (n2 > n1 and n2 > n3 and n2 > n4)
	{	
		alt = n1;
		n1 = n2;
		n2 = alt;
	}
	else if (n3 > n1 and n3 > n2 and n3 > n4)
	{	
		alt = n1;
		n1 = n3;
		n3 = alt;
	}
	else if (n4 > n1 and n4 > n2 and n4 > n3)
	{	
		alt = n1;
		n1 = n4;
		n4 = alt;
	}
	if (n3 > n2 and n3 > n4)
	{	
		alt = n2;
		n2 = n3;
		n3 = alt;
	}
	else if (n4 > n2 and n4 > n3)
	{	
		alt = n2;
		n2 = n4;
		n4 = alt;
	}
	if (n4 > n3)
	{	
		alt = n3;
		n3 = n4;
		n4 = alt;
	}
	
	cout << n1 + n2 + n3;
	
	return 0;
}
