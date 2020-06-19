#include <iostream>
using namespace std;

int main(){
    int dia, mes, year, d; 
    cout<<"Ingrese el dia que desea: ";
    cin>>dia;
    cout<<"Ingrese el mes que desea: ";
    cin>>mes;
    cout<<"Ingrese el año que desea: ";
    cin>>year;

  d=dia+1;

    if((dia>31)||(mes>12)||(year<0)){
        cout<<"La fecha no es valida";
    }else if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)){
        if((dia > 31)||dia<1){
            cout<<"Dia no valido";
        }else if((d>31)&(mes!=12)){
            dia = 1;
            mes = mes + 1;
            cout<<dia<<"/"<<mes<<"/"<<year;
        }else if(d<31){
            cout<<d<<"/"<<mes<<"/"<<year;
        }else if((d>31)&(mes==12)){
            dia = 1;
            mes = 1;
            year = year + 1;
            cout<<dia<<"/"<<mes<<"/"<<year;
        }
    }else if(mes==2){
        if((year % 4 != 0)&((year % 400 !=0))){
            if((dia > 28)||(dia<1)){
                cout<<"Dia no valido";
            }else if(d>28){
                dia = 1;
                mes = mes + 1;
                cout<<dia<<"/"<<mes<<"/"<<year;
            }else if(d<28){
                cout<<d<<"/"<<mes<<"/"<<year;
            }
        }else if((year % 4 == 0)&(((year % 100!=0))||(year % 400==0))){
            if((dia > 29)||(dia<1)){
                cout<<"Dia no valido";
            }else if(d>29){
                dia = 1;
                mes = mes + 1;
                cout<<dia<<"/"<<mes<<"/"<<year;
            }else if(d<=29){
                cout<<d<<"/"<<mes<<"/"<<year;
            }
        }
    }else if((mes==4)||(mes==6)||(mes==9)||(mes==11)){
        if((dia > 30)||(dia<1)){
            cout<<"Dia no valido";
        }else if(d>30){
            dia = 1;
            mes = mes + 1;
            cout<<dia<<"/"<<mes<<"/"<<year;
        }else if(d<30){
            cout<<d<<"/"<<mes<<"/"<<year;
        }   
    } 
    return 0;
}