#include<iostream>
using namespace std;

int main()
{
    int num, n = 1;
    cin >> num;
    do
    {
        if(n * (n + 1) * (n + 2) == num)
        {
            cout << "TRIANGULAR" << ' ' << n << ' ' << n + 1 << ' ' << n + 2;
            n = num;
        }
        else if((n + 2) == (num / 2))
        {
            cout << "NAO TRIANGULAR";
        }
        n++;
    }
    while((n + 2) <= (num / 2));
    return 0;
}