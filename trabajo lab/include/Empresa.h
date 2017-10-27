#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include <iostream>

using namespace std;

class Empresa
{
    public:
        string nombre;
        long RUC;
        Empresa(string _nombre,long _RUC);

        void mostrar_empresa();

};

#endif // EMPRESA_H
