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


    equipo e1("Peru");
    e1.print();
    jugador arreglo[10];
    arreglo[0].setjugadores(j1);
    arreglo[1].setjugadores(j2);
    arreglo[2].setjugadores(j3);
    arreglo[3].setjugadores(j4);
    arreglo[4].setjugadores(j5);
    arreglo[5].setjugadores(j6);
    arreglo[6].setjugadores(j7);
    arreglo[7].setjugadores(j8);
    arreglo[8].setjugadores(j9);
    arreglo[9].setjugadores(j10);
    arreglo[10].setjugadores(j11);

    arreglo[0].mensaje();
}
