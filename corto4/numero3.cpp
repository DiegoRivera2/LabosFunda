#include "iostream"
using namespace std;
float leer(float a[]);
float final(float a[]);

int main()
{
    float notas[5];
    int n;
    cout << "\nIngrese el numero de estudiantes a evaluar: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
    leer(notas);

    if(final(notas)>=7)
    {
        cout << "\nUsted Aprobo\n";
    }
    else
    {
        cout << "\nUsted Reprobo\n";
    }
    }
    return 0;
}
float leer(float a[])
{
    for(int i=0; i<5;i++)
    {
        cout << "\nIngrerse la calificacion del estudiante: ";
        cin >> a[i];
    }
}
float final(float a[])
{
    float notaF;
    for(int i=0; i<5; i++)
    {
        notaF+=a[i]*0.20;
    }
    cout << "\nEl Promedio del estudiante es: " << notaF << "\n\n";
    return notaF;
}