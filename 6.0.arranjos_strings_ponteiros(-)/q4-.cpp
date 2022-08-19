#include <iostream>
using namespace std;

int main()
{
    int vetor[10] = {0}, elemento_inicial, n, alt;f
    cin >> elemento_inicial;
    for(int i = 0; i < elemento_inicial; i++)
    {
        cin >> vetor[i];
    }
    cin >> n;
    cout << "dffff";
    for(int i = 8; i > n; i--)
    {
        vetor[i + 1] = vetor[i];
    }
    cin >> vetor[n];
    for(int i = 0; i < 10; i++)
        cout << vetor[n] << ' ';

    return 0;
}