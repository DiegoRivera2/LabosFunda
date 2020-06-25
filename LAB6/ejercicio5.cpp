#include "iostream"
#include "stdlib.h"
using namespace std;

int main(int arge, char *argv[])
{
   int a[100];
   int n=100, acum=0;

   cout << "\nLos numeros impares entre el 1 y el 100 son: \n";

   for(int i=100;i>0;i--)
   {
     a[i]=n--;
     if(a[i]%2!=0)
     {
       cout << "\n";
       cout << a[i];
     }
   }
}