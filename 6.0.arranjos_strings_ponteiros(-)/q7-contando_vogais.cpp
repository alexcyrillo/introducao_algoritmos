#include <iostream>
using namespace std;

int main()
{
    string palavra;
    int qt_vogal = 0, qt_conso = 0;
    cin >> palavra;
    int x = palavra.size();
    for(int i = 0; i < x; i++)
    {
        if(palavra[i] == 65 || palavra[i] == 69 || palavra[i] == 73 || palavra[i] == 79 || palavra[i] == 85 || palavra[i] == 97 || palavra[i] == 101 || palavra[i] == 105 || palavra[i] == 111 || palavra[i] == 117)
            qt_vogal++;
        else if((palavra[i] > 65 && palavra[i] <= 90) || (palavra[i] > 97 && palavra[i] <= 122))
            qt_conso++;
    }
    cout << qt_vogal << endl << qt_conso;
    return 0;
}