#include "iostream"
using namespace std;

int main()
{
    int mayor, menor, residuo;

    cout << "\n";
    cout << "MCD DE DOS NUMEROS!\n\n";
    cout << "Digite el numero mayor: ";
    cin >> mayor;
    cout << "Digite el numero menor: ";
    cin >> menor;

    do
    {
        residuo=mayor%menor;
        if(residuo!=0)
        {
           mayor=menor;
           menor=residuo;
        }
    }
    while(residuo!=0);
    cout << "El MCD es: " << menor;
    cout << "\n";
    return 0;
}

