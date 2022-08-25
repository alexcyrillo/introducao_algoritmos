#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int triangPasc[x][x] = {0};
    for(int l = 0; l < x; l++)
    {
        for(int c = 0; c < x; c++)
        {
            if(l <= c)
            {
                if(c == 0 || l == c)
                {
                    triangPasc[l][c] = 1;
                }
                else if(l > 0)
                {
                    triangPasc[l][c] = triangPasc[l - 1][c] + triangPasc[l - 1][c - 1];
                }
            }
        }
    }
    for(int l = 0; l < x; l++)
    {
        for(int c = 0; c < x; c++)
        {
            if(triangPasc[l][c] != 0)
            cout << triangPasc[l][c] << ' ';
        }
        cout << endl;
    }
    return 0;
}