#include "iostream"
using namespace std;

int main()
{
    int a, b, c, prom;

    cout << "PROMEDIO DE 3 NUMEROS ENTEROS" << "\n";
    cout << "\n";

    cout << "Digite el valor de a: ";
    cin >> a;

    cout << "Digite el valor de b: ";
    cin >> b;

    cout << "Digite el valor de c: ";
    cin >> c;

    prom = (a+b+c)/3;

    cout << "\n";
    cout << "El Promedio es: " << prom << "\n";

}