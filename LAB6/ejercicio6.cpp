#include "iostream"
using namespace std;

int main()
{
    int x, contador, s;
    contador=0;

    cout << "\nIngrese el numero de digitos del arreglo: \n";
    cin >> x;

    int arreglo[x];

    for(int i=0; i<x; i++)
    {
        cout << "\nDigite los numeros que desee(Pueden ser repetidos): ";
        cin >> arreglo[i];
    }

    cout << "\nDigite el numero a verificar: ";
    cin >> s;

    for(int i=0; i<x; i++)
    {
        if( s==arreglo[i])
        {
            contador++;
        }
    }
    
    cout << "\nEl numero " << s << " se repite " << contador << " veces";
}