#ifndef JUGADORES_H
#define JUGADORES_H
#include <string>

using namespace std;

class jugadores
{
    public:
        string nombre,posicion;
        int numero, agresividad;

        jugadores();
        jugadores(string nombre, int numero, string posicion, int agresividad);

        void setnombre(string n);
        void setnumero(int num);
        void setposicion(string pos);
        void setagresividad(int a);

        void print();
};

class equipo: public jugadores{
     public:
        string nomequipo;
        jugadores(string nombre, int numero, string posicion, int agresividad);

        void printequipo();

};
#endif // JUGADORES_H
