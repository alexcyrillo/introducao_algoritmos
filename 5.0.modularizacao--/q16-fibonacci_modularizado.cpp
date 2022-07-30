//fibonacci
#include <iostream>
using namespace std;

void fib(int n)
{
    int f1 = 0, f2 = 0, i = 1, alt = 1;
    while (i <= n)
    {
        cout << f1 << ' ';
        f2 = f1;
        f1 = f2 + alt;
        alt = f2;
        i++;
    }
}

int main()
{
	int n;
	cin >> n;
    fib(n);
	return 0;
}
