#include "jugadores.h"
#include <iostream>

using namespace std;

jugadores::jugadores()
{
    nombre = "";
    numero = 0;
    posicion = "";
    agresividad = 0;
}

jugadores::jugadores(string h, int num, string pos, int a)
{
    nombre=h;
    numero=num;
    posicion=pos;
    agresividad=a;
    //ctor
}

void jugadores::setnombre(string h){
    nombre=h;

}

void jugadores::setnumero(int num){
    numero=num;

}

void jugadores::setposicion(string pos){
    posicion=pos;

}

void jugadores::print(){
    cout<<nombre<<", "<<numero<<", "<<posicion<<", "<<agresividad<<endl;
}

void equipo::equipo(string h, int num, string pos, int a, string nome) : jugadores(string h, int num, string pos, int a)
{
    nomequipo=nome;
    //ctor
}

void equipo::printequipo(){
    cout<<nomequipo<<endl;
    print();
}

