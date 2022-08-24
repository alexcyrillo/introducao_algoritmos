#include <iostream>
using namespace std;

int main()
{
    string palavra;
    int qt_vogal = 0;
    cin >> palavra;
    int x = palavra.size();
    for(int i = 0; i < x; i++)
    {
        if(palavra[i] == 'a' or palavra[i] == 'e' or palavra[i] == 'i' or palavra[i] == 'o' or palavra[i] == 'u')
            qt_vogal++;
    }
    cout << qt_vogal;
    return 0;
}