#include "iostream"
#include "cmath"

using namespace std;

int main()
{
   int n;
   string nombre;
   float horas, extra, salarioT, salarioR;


   cout << "\n";
   cout << "CALCULADORA DE SALARIOS";
   cout << "\n";

   n=1;
   while(n!=0)
   {
       cout << "\n";
       cout << "Ingrse el nombre del Empleado: ";
       cin >> nombre;
       cout << "\n";
       cout << "Ingrese el numero de horas trabajadas: ";
       cin >> horas;
       cout << "\n";
       cout << "Ingrese el numero de horas extra trabajadas: ";
       cin >> extra;

       salarioT = (1.75*horas)+(2.50*extra);

       if(salarioT>500)
       {
           salarioR=(salarioT-(salarioT*0.04)-(salarioT*0.0625)-(salarioT*0.1));
       }
       else
       {
           salarioR=(salarioT-(salarioT*0.04)-(salarioT*0.0625));
       }
       cout << "\n";
       cout << "El salario total de " << nombre << " es: $" << salarioT << " y el salario real es: $" << salarioR; 
       cout << "\n";
       cout << "Para continuar con el salario de otro empleado presione 1 y para finalizar presione 0: ";
       cin >> n;
   }
   return 0;
}