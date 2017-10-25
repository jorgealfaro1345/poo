#include "fecha.h"
#include <iostream>

using namespace std;

fecha::fecha()
{
    dia=0;
    mes=0;
    anio=0;//ctor
}

fecha::fecha(int _dia, int _mes, int _anio)
{
    dia=_dia;
    mes=_mes;
    anio=_anio;//ctor
}

void fecha::setdia(int _dia){
    if (mes==2){
         if(anio>28){
             cout<<"entrada incorrecta"<<endl;
        }else{
         dia=_dia;
        }

    if (mes==4||mes==6||mes==9||mes==11){
        if (anio>30){
             cout<<"entrada incorrecta"<<endl;
        }
     }else{
         dia=anio;
     }

     if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
         if (anio>31){
             cout<<"entrada incorrecta"<<endl;
         }
     }else{
         dia=anio;
     }

    }
}

void fecha::setmes(int _mes){
    if(mes>12){
         cout<<"entrada incorrecta"<<endl;
    }else{
        mes=_mes;
    }
}

void fecha::setanio(int _anio){
    anio=_anio;

}

void fecha::bisiesto(){
    if(anio%4==0){
        if((anio%100)!=0 || (anio%400)==0)
            cout<<"es bisiesto"<<endl;
    }else{
         cout<<"no es bisiesto"<<endl;
    }
 }

void fecha::sumadias(int x){
    dia+=x;

    if (mes==2){
        if(dia>28){
            dia=0+(dia-28);
            mes++;
        }
    }

    if (mes==4||mes==6||mes==9||mes==11){
        if (dia>30){
            dia=0+(dia-30);
            mes++;
        }
    }

    if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
        if (dia>31){
            dia=0+(dia-31);
            mes++;
        }
    }

    if (mes>12){
        mes=0+(mes-12);
        anio++;
    }
}

void fecha::mostrarfecha(){

    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;

}
