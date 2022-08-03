#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int  c = 0;
    getline(cin, a); //pega uma frase e a coloca em um string, com " " sendo representado por \0
    for(int i = 0; i < a.size();i++)
        if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u')
            c++;
    cout << c;
    return 0;
}