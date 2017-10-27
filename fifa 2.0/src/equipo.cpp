#include "equipo.h"
#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;


equipo::equipo(string _nombre)
{
    nombre=_nombre;
}

void equipo::jugadores(jugador x){
    for(int i=0;i<11;++i)
    {
        x=arr[i];
    }

}


void equipo::print(){
    cout<<"El equipo es: "<<nombre<<" ; y sus integrantes son: "<<endl;
    for(int i=0;i<11;++i)
    {
        arr[i].mostrar();
    }



}
