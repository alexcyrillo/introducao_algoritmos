#include<iostream>
using namespace std;

string conversao(int num)
{
    int d, u;
    string r = "";
    d = num / 10;
    u = num - (d * 10);
    if(d > 0)
    {
        switch (d)
        {
            case 1:
                r = "X";
            break;
            case 2:
                r = "XX";
            break;
            case 3:
                r = "XXX";
            break;
            case 4:
                r = "XL";
            break;
            case 5:
                r = "L";
            break;
        }
    }
    if(u > 0)
    {
        switch (u)
        {
            case 1:
                r += "I";
            break;
            case 2:
                r += "II";
            break;
            case 3:
                r += "III";
            break;
            case 4:
                r += "IV";
            break;
            case 5:
                r += "V";
            break;
            case 6:
                r += "VI";
            break;
            case 7:
                r += "VII";
            break;
            case 8:
                r += "VIII";
            break;
            case 9:
                r += "IX";
            break;
        }
    }
    return r;
}

int main()
{
    int num;
    while(num > 0)
    {
        cin >> num;
        if(num >= 1 and num <= 50)
            cout << conversao(num) << endl;
        else if(num == 0 or num > 50)
            cout << "NUMERO INVALIDO" << endl;
    }
    return 0;
}