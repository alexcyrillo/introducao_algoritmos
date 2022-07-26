#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int nTotal, nLuxo, nNormal, difNormal;
	
	cin >> nTotal;
	
	difNormal = (nTotal % 3);
	nTotal -= difNormal;
	nNormal = 2 * nTotal / 3 + difNormal;
	nLuxo = nTotal / 3;
	
	cout << nNormal << endl << nLuxo ;	
		
	return 0;
}
