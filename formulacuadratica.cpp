#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    float a, b, c, x1, x2;

    cout << "\n";
    cout << "FORMULA CUADRATICA";
    cout << "\n";

    cout << "\n";
    cout << "Inserte el valor de a: ";
    cin >> a;

    cout << "Inserte el valor de b: ";
    cin >> b;

    cout << "Inserte el valor de c: ";
    cin >> c;

    x1 = ((-b)+sqrt(pow(b, 2)-4*a*c))/(2*a);
    x2 = ((-b)-sqrt(pow(b, 2)-4*a*c))/(2*a);

    cout << "\n";
    cout << "La respuesta para x1 es: " << x1 << "\n";
    cout << "La respuesta para x2 es: " << x2 << "\n";

}                               