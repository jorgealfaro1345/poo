#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;

class equipo
{
    private:
    jugador x;
    public:
        string nombre;
        jugador lista[];
        equipo(string nombre);
        void setjugadores(jugador x);
        void mensaje();

        void print();
};

#endif // EQUIPO_H
