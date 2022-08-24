#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream leitura("arquivo");
    int n;
    while (leitura >> n)
    {
        cout << n;
    }
    
}