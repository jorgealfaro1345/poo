#include "equipo.h"
#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;


equipo::equipo(string _nombre)
{
    nombre=_nombre;
}


void equipo::print(){
    cout<<"El equipo es: "<<nombre<<endl;

}
