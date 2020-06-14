#include "iostream"
#include "cstdlib"
#include "time.h"
using namespace std;

int main()
{
  int x, n, intentos=5;
  srand(time(0));
  x=rand()%100+1;
  cout << "\n";
  cout << "ADIVINA EL NUMERO!";
  cout << "\n" << "\n";
  
  for(int i=0;i<n;i++)
  while(intentos!=0)
  {
    cout << "\n";
    cout << "adivina el numero entre el 1 y el 100: ";
    cin >> n;

    if(n==x)
    {
        cout << "\n";
        cout << "FELICIADDES! ADIVINASTE EL NUMERO";
        cout << "\n";
    }
    else if(n==0)
    {
        intentos=0;
    }
    else
    {
        cout << "\n";
        cout << "Si quieres salir del juego presiona 0";
        cout << "\n";
        if(n>x)
        {
            cout << "\n";
            cout << "El Numero que escogiste es mayor que el numero secreto, Sigue intentando";
        }
        else
        {
            cout << "\n";
            cout << "El numero que escogsite es menor que el numero secreto, Sigue intentando";
        }
        intentos--;
        cout << "\n";
        cout << "Aun te quedan " << intentos << " Intentos";
    }  
  }
  cout << "\n";
  cout << "El numero secreto era: " << x << " Gracias por jugar:)";
  return 0; 
}