#ifndef EMPLEADO _H
#define EMPLEADO _H
#include <string>
#include <iostream>
#include "fecha.h"

using namespace std;


class Empleado
{
    public:
        string nombre;
        int salario;
        fecha fecha_de_ingreso;
        Empleado (string _nombre,int _salario,fecha _fecha_de_ingreso);

        void mostrar_empleado();

};


#endif // EMPLEADO _H
