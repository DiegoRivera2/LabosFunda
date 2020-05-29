#include "iostream"

using namespace std;

int main()
{
    int a;
    string resp;

    cout << "\n";
    cout << "NUMEROS NEGATIVOS Y POSITIVOS!";
    cout << "\n";
    cout << "Inserte el numero  a verificar: ";
    cin >> a;

    if(a != 0)
    {
        resp = (a >= 0) ? " positivo" : " negativo";
        cout << "\n";
        cout << "El Numero " << a << " es" << resp;
    }
    else
    {
        cout << "\n";
        cout << "El Numero es 0";
    } 
}