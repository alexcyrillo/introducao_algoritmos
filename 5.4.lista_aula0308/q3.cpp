#include <iostream>
using namespace std;

int posicao(int p)
{
    int i = 0, elementos[7] = {20, -33, 44, 58, 19, 44, 10};
    while(i < 7 or elementos[i] != p)
        i++;
    if(i == 7)
        return -1;
    else
        return i;    
}

int main()
{
    int pos;
    cin >> pos;
    cout << posicao(pos);
    return 0;
}