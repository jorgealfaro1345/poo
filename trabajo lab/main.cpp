#include <iostream>
#include <string>
#include "Empleado .h"
#include "Empresa.h"
#include "fecha.h"

using namespace std;

int main()
{
    fecha fdi1;
    fdi1.setdia(27);
    fdi1.setmes(5);
    fdi1.setanio(2015);
    Empleado e1("jorge",630,fdi1);
    e1.mostrar_empleado();
    Empresa emp1("nalgdonalds",13451216459);
    emp1.mostrar_empresa();
}
