#include <iostream>
#include "fecha.h"

using namespace std;

int main()
{
    fecha hoy(30,2,2017);
    hoy.bisiesto();
    hoy.sumadias(6);

    hoy.mostrarfecha();
}
