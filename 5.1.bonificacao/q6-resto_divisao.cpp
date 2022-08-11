#include<iostream>
using namespace std;

int main()
{   
    int D, d, q = 0, a;
    cin >> D >> d; 
    if(d > D)
    { 
        a = D;
        D = d;
        d = a;
    }
    while(D >= d)
    {
        D -= d;
        q++;
    }   
    cout << D << endl << q;
    return 0;
}