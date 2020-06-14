#include "iostream "
using namespace std;

int main()
{
  int a;

  cout << "\n";
  cout << "AÑOS BISIESTOS!";
  cout << "\n";

  cout << "\n";
  cout << "Ingrese el año a verificar: ";
  cin >> a;

  if(a %400==0)
  {
    cout << "\n";
    cout << "El " << a << " es un año bisiesto";
    cout << "\n";
  }
  else if(a %4==0 && a %100!=0)
  {
    cout << "\n";
    cout << "El " << a << " es un año bisiesto";
    cout << "\n";
  }
  else
  {
    cout << "\n";
    cout << "El " << a << " no es un año bisiesto";
    cout << "\n";
  }
  return 0;
}


