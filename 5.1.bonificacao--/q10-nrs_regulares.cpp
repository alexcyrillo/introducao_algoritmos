#include<iostream>
using namespace std;

void regular(int num)
{
    while(num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
    {
        if(num % 2 == 0)
        {
            num /= 2;
            cout << "2 ";
        }
        else if(num % 3 == 0)
        {
            num /= 3;
            cout << "3 ";
        }
        else if(num % 5 == 0)
        {
            num /= 5;
            cout << "5 ";
        }
    }
    if(num == 1)
            cout << endl << "REGULAR";
        else
            cout << num << endl << "NAO REGULAR";
}

int main()
{
    int num;
    cin >> num;
    regular(num);
    return 0;
}