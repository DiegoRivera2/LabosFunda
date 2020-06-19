#include "iostream"
using namespace std;

bool year(int a)
{
   if(a%400==0)
    {
        return true;
    }
    else if(a%4==0 && a%100!=0)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int main()
{
    int a=0;

    bool r=0;

    cout << "\nAÑOS BISIESTOS!!!\n";
    cout << "Inserte el año que desea: ";
    cin >> a;

    year(a);
    

    if(year(a)==true)
    {
        cout << "\nEl " << a << " es un año bisiesto!\n";
    }
    else
    {
        cout << "\nEl " << a << " no es un año bisiesto!\n";
    }
    return 0;     
}