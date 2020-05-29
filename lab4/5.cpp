#include "iostream"
#include "cstring"
using namespace std;

int main ()
{
    char p[30];
    int x;

    cout << "\n" << "\n";
    cout << "Digite una palabra: ";
    cin >> p;

    x = strlen(p)-1;

    if(p[0]==p[x])
    {
        cout << "\n" << "\n";
        cout << "La palabra incia y finaliza con el mismo caracter.";
    }
    else
    {
        cout << "\n" << "\n";
        cout << "La palabra no inicia y Finaliza con el mismo caracter";
    }
}