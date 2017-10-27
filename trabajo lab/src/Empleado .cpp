#include "Empleado .h"
#include <string>
#include "fecha.h"

using namespace std;

Empleado ::Empleado (string _nombre,int _salario,fecha _fecha_de_ingreso)
{
    nombre=_nombre;
    salario=_salario;
    fecha_de_ingreso=_fecha_de_ingreso;//ctor
}

void Empleado ::mostrar_empleado()
{
    cout<<"El nombre del empleado es: "<<nombre<<"; su salario es: "<<salario<<"; su fecha de ingreso es: "<< fecha_de_ingreso <<endl;
}
