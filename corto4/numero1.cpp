#include "iostream"
using namespace std;

char murcielago(char a[]);

int main()
{
    char n[100];

   murcielago(n);
}

char murcielago(char a[])
{
    char codigo[100];
    int i=0;

    cout << "\nIngrese el texto a codificar: ";
    cin >> codigo;

    while(codigo[i]!=0)
    {

       if (codigo[i]=='M'||codigo[i]=='m')
       codigo[i]='0';
       if (codigo[i]=='U'||codigo[i]=='u')
       codigo[i]='1';
       if (codigo[i]=='R'||codigo[i]=='r')
       codigo[i]='2';
       if (codigo[i]=='C'||codigo[i]=='c')
       codigo[i]='3';
       if (codigo[i]=='I'||codigo[i]=='i')
       codigo[i]='4';
       if (codigo[i]=='E'||codigo[i]=='e')
       codigo[i]='5';
       if (codigo[i]=='L'||codigo[i]=='l')
       codigo[i]='6';
       if (codigo[i]=='A'||codigo[i]=='a')
       codigo[i]='7';
       if (codigo[i]=='G'||codigo[i]=='g')
       codigo[i]='8';
       if (codigo[i]=='O'||codigo[i]=='o')
       codigo[i]='9';
       i++;
    }
    cout << "\nEn codigo Murcielago tu texto seria: " << codigo;
}




