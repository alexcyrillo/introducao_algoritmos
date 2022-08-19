#include <iostream>
using namespace std;

int main()
{
    string palavra;
    int qt_vogal = 0;
    cin >> palavra;
    for(int i = 0; i < sizeof(palavra); i++)
    {
        if(palavra[i] == 'a' or palavra[i] == 'e' or palavra[i] == 'i' or palavra[i] == 'o' or palavra[i] == 'u')
            qt_vogal++;
    }
    cout << qt_vogal;
    return 0;
}