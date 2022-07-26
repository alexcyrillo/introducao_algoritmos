#include <iostream>
using namespace std;

int main()
{
	long long int a, aux, num, i = 1;
	int primeiro, ultimo;
	cin >> num;
	ultimo = num;
	do
	{
		if(num >= i and (num < i * 10))
		{
			primeiro = num / i;
			aux = primeiro * i;
			a = i;
			while(a != 1)
			{
				a /= 10;
				ultimo -= aux;
				aux = (ultimo / a) * a;
			}
		}
		else
			i *= 10;
	}
	while(a != 1);
	num -= ((primeiro * i) + ultimo);
	num += ((ultimo * i) + primeiro);
	cout << num;
	return 0;
}
