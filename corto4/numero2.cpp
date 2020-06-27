#include "iostream"
using namespace std;

float comparacion(float a[]);
float promedio(float a[]);

int main()
{
    float estaturas[25], promedioE;
    int i=0;
     for(int i=0; i<25;i++)
    {
        cout << "Ingrerse la estatura del estudiante: ";
        cin >> estaturas[i];
    }

    promedioE=promedio(estaturas);
    cout << "\nLa Estatura Promedio es: " <<  promedioE << "\n";
    comparacion(estaturas);

}

float comparacion(float a[])
{
    int contadorA=0, contadorD=0;
    
    for(int i=0; i<25;i++)
    {
        if(a[i]>=promedio(a))
        {
            contadorA++;
        }
        else
        {
            contadorD++;
        }
        
    }

    cout << "\nPor Arriba del promedio estan: " << contadorA << " Alumnos y por debajo estan " << contadorD << " Alumnos.";      
}

float promedio(float a[])
{
    float estaturaP;
    float suma=0;

    for(int i=0; i<25; i++)
    {
        suma+=a[i]; 
    }

    estaturaP=suma/25;

    return estaturaP;
}