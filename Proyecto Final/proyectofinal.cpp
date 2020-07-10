#include "iostream"
using namespace std;

const int longcad=20;

struct CostoPorArticulo
{
    char nombrearticulo[longcad+1];
    int cantidad;
    float precio;
    float costoporarticulos;
};

float datos(struct CostoPorArticulo p[], int n);
float calcular(struct CostoPorArticulo p[], int n);
float desplegar(struct CostoPorArticulo p[], int n);
float total(struct CostoPorArticulo p[], int n);

int main() // En esta Funcion main mandamos a llamar las demas funciones para que el programa trabaje correctamente.
{
    int n;
    cout << "Cantidad de Articulos: ";
    cin >> n;
    CostoPorArticulo CPA[n];

    datos(CPA, n);
    calcular(CPA, n);
    desplegar(CPA, n);

    cout << "\nSu Total es: " << total(CPA, n);

    return 0;
}

float datos(struct CostoPorArticulo p[], int n) // En eta fucion se recolectaran los datos que el usuario ingrese.
{
    for(int i=0; i<n; i++)
    {
    cout << "\n"; 
    cout << "Ingrese el nombre del articulo: ";
    cin >> p[i].nombrearticulo;
    cout << "Ingrese la cantidad del producto: ";
    cin >> p[i].cantidad;
    cout << "Ingrese el precio del producto: ";
    cin >> p[i].precio;
    }
}

float calcular(struct CostoPorArticulo p[], int n) // Esta funcion calcula el costo por la cantidad de articulos que el usuario tomo.
{
    for(int i=0;i<n; i++)
    {
        p[i].costoporarticulos = p[i].cantidad * p[i].precio; 
    }
}

float desplegar(struct CostoPorArticulo p[], int n) // Con esta funcion desplegaremos todos los datos en pantalla.
{
   for(int i=0; i<n;i++)
   {
   cout << "\n";
   cout << "Nombre del articulo: " << p[i].nombrearticulo << "\n";
   cout << "Cantidad de Articulos : " << p[i].cantidad << "\n";
   cout << "Precio por articulo: " << p[i].precio << "\n";
   cout << "Precio total: " << p[i].costoporarticulos << "\n";
   }
}

float total(struct CostoPorArticulo p[], int n) // Esta funcion esta destinada para calcular el total de la compra del usuario.
{
    float totalC=0;
    for(int i=0;i<n;i++)
    {
    totalC += p[i].costoporarticulos;
    }
    return totalC;
}

