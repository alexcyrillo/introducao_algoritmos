#include <iostream>
using namespace std;

int main()
{
    int dia, i = 0;
    float arrecadado = 0, taxa;
    char cat;

    cin >> taxa;
    while(dia != -1)
    {
        cin >> dia >> cat;
        switch (cat)
        {
        case 'I':
            if(dia >= 22 and dia <= 31)
            {
                arrecadado += taxa * 0.7;
            }
            else if(dia >=1 and dia <= 6)
            {
                arrecadado += taxa * 0.9;
            }
            break;
        case 'E':
            if(dia >= 22 and dia <= 31)
            {
                arrecadado += taxa * 0.85;
            }
            else if(dia >=1 and dia <= 6)
            {
                arrecadado += taxa * 0.95;
            }
            break;
        }
    }
    cout << arrecadado << endl;
    return 0;
}