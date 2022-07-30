#include <iostream>
using namespace std;

int main()
{
	int num, num_triang = 0, n = 1;
	cin >> num;
	while(n <= num)
	{
		num_triang = n + num_triang;
		n++;
	}
	cout << num_triang;
	return 0;
}

