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
        jugador arr[11];
        string nombre;
        equipo(string nombre);
        void jugadores(jugador x);
        void mensaje();

        void print();
};

#endif // EQUIPO_H
