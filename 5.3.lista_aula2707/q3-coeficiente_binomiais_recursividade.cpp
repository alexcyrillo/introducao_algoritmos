#include <iostream>
using namespace std;

int c_bino(int n, int k)
{
    if(k == 0)
        return 1;
    else if(n == k)
        return 1;
    else
        return(c_bino(n - 1, k - 1) + c_bino(n - 1, k));
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << c_bino(n, k);
    return 0;
}