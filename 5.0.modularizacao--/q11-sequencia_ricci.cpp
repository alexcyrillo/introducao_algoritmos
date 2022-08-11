#include <iostream>
using namespace std;

int ricci(int n0, int n1, int n)
{
        if(n == 0)
        {
            return n0;
        }
        else if(n == 1)
        {
            return n1;
        }
        else
        {
            return (ricci(n0, n1, n - 1) + ricci(n0, n1, n - 2));
        }
}

int main()
{
    int n0, n1, termos, n = 0;
    cin >> n0 >> n1 >> termos;
    while(n < termos)
    {
        cout << ricci(n0, n1, n) << ' ';
        n++;
    }
    return 0;
}