#include <iostream>
#include "fecha.h"

using namespace std;

int main()
{
    fecha hoy(17,5,2016);
    hoy.bisiesto();
    hoy.sumadias(10);

    hoy.mostrarfecha();
}
