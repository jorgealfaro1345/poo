#include "equipo.h"
#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;


equipo::equipo(){
    nameEquip="";
}

equipo::equipo(string n, jugador jres[11]){
    setNameEquipo(n);
    setEquipo(jres);
}

void equipo::setNameEquipo(string nam){
    nameEquip=nam;
}

void equipo::setEquipo(jugador jres[11]){
    cout<<"El nombre del EQUIPO es: "<<nameEquip<<endl;
    cout<<endl;
    for(int i=0; i<11 ;i++){
        a=jres[i];
        a.mostrar();
    }
}

