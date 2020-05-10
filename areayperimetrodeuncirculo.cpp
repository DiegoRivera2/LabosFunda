#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    float r, area, perimetro;

    cout << "\n";
    cout << "AREA Y PERIMETRO DEL CIRCULO" << "\n";
    cout << "\n";

    cout << "Inserte el radio del circulo: ";
    cin >> r;

    area = 3.1416*pow(r, 2);
    perimetro = 2*3.1416*r;

    cout << "\n";
    cout << "El Area del circulo es: " << area << "\n";
    cout << "El Perimetro del circulo es: " << perimetro << "\n";

}