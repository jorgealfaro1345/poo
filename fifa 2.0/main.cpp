#include <iostream>
#include "jugador.h"
#include "equipo.h"
#include <string>

using namespace std;

int main()
{

    jugador j1("Gallese", 1, "Arquero", 7);
    jugador j2("Guerrero", 9, "Delantero", 2);
    jugador j3("Cueva", 10, "Delantero", 7);
    jugador j4("Flores", 20, "Delantero", 6);
    jugador j5("Carrillo", 18, "Delantero", 4);
    jugador j6("Yotún", 19, "Centro", 2);
    jugador j7("Tapia", 13, "Centro", 3);
    jugador j8("Lobatón", 16, "Centro", 8);
    jugador j9("Corzo", 3, "Defensa", 4);
    jugador j10("Rodríguez", 2, "Defensa", 4);
    jugador j11("Ramos", 15, "Defensa", 2);


    jugador z[]={j1,j2,j3,j4,j5,j6,j7,j8,j9,j10};

    equipo x("PERU", z);
    return 0;
}

