#include "iostream"

using namespace std;

int main()
{
    int a, b;

    cout << "\n";
    cout << "VERIFICACION DE DIVISIBILIDAD" << "\n";
    cout << "\n";
    cout << "Inserte el numero mayor: ";
    cin >> a;
    cout << "\n";
    cout << "Inserte el numero menor: ";
    cin >> b;

    if(a%b==0)
    {
        b != 0;
        cout << "\n";
        cout << "estos Numeros SI son divisibles";
    }
    else
    {
        cout << "\n";
        cout << "Estos Numeros NO son divisibles";
    }
    

}
