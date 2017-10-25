#include "equipo.h"
#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;


equipo::equipo(string _nombre)
{
    nombre=_nombre;
}

void equipo::setjugadores(jugador x){
    jugadores =x;

}

void equipo::mensaje(){
    cout<<jugadores<<endl;

}


void equipo::print(){
    cout<<"El equipo es: "<<nombre<<endl;

}
