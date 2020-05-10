#include "iostream"
using namespace std;

int main()
{
    string nombre; 
    int cantidad;
    float precio, total;

    cout << "CARRITO DE COMPRAS" << "\n";
    cout << "\n";

    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    cout << "Ingrese el Precio del producto: ";
    cin >> precio;

    total = cantidad*precio;

    cout << "\n";
    cout << "precio Total: " << "$" << total << " de " << nombre << "\n";

}