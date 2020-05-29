#include "iostream"
#include "cstring"
using namespace std;

int main ()
{
    char p[40];
    

    cout << "\n";
    cout << "Inserte una palabra: ";
    cin >> p;

    cout << "\n";
    cout << "La Palabra tiene: " << strlen(p) << " Caracteres.";

    if(strlen(p)%2==0)
    {
        cout << "\n" << "\n";
        cout << "Ademas la longitud de la palabra es par.";
    }
    else
    {
        cout << "\n" << "\n";
        cout << "Ademas la longitud de la palabra es impar";
    }   
}


