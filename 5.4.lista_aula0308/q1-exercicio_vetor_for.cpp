#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int pares[n];

    for(int i = 0; i < n;i++)
    {
        do
        {
            cin >> num;
            if(num % 2 == 0)
            {
                pares[i] = num;
            }
        }
        while(num % 2 == 1);
    }

    for(int i = 0; i < n;i++)
        cout << pares[i] << endl; 
    return 0;
}