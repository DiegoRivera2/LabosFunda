#include "iostream"

using namespace std;

int main()
{
    int a;

    cout << "\n";
    cout << "NUMEROS PARES E IMPARES.";
    cout << "\n";
    cout << "Inserte el numero a verificar: ";
    cin >> a;

    if(a%2==0)
    {
        cout << "\n";
        cout << a << " Si es un numero par. ";
    }
    else
    {
        cout << "\n";
        cout << a << " No es un numero par.";
    }  
}