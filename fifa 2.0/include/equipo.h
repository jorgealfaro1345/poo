#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;

class equipo
{
    public:
        string nombre;
        equipo(string nombre);

        void print();
};

#endif // EQUIPO_H
