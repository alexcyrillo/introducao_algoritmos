#include <iostream>
using namespace std;

int main()
{
    int vetor[10] = {0}, elemento_inicial, n, p;
    cin >> elemento_inicial;
    for(int i = 0; i < elemento_inicial; i++)
    {
        cin >> vetor[i];
    }
    cin >> n >> p;
    for(int i = 8; i >= p; i--)
    {
        vetor[i + 1] = vetor[i];
    }
    vetor[p] = n;
    for(int i = 0; i < 10; i++)
        cout << vetor[i] << ' ';
    return 0;
}