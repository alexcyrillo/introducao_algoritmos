#include <iostream>
using namespace std;

int main()
{
    char vetor_a[10], vetor_b[10], alt;
    for(int i = 0; i < 10; i++)
    {
        cin >> vetor_a[i];
    }
    for(int i = 0; i < 10; i++)
    {
        cin >> vetor_b[i];
    }
    for(int i = 0; i < 5; i++)
    {
        alt = vetor_a[2 * i];
        vetor_a[2 * i] = vetor_b[9 - i];
        vetor_b[9 - i] = alt;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << vetor_a[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << vetor_b[i] << ' ';
    }
    return 0;
}