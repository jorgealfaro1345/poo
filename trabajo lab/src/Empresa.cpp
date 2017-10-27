#include "Empresa.h"
#include <string>
#include <iostream>

using namespace std;

Empresa::Empresa(string _nombre,long _RUC)
{
    nombre=_nombre;
    RUC=_RUC;//ctor
}

void Empresa:: mostrar_empresa()
{
    cout<<"La empresa se llama: "<<nombre<<"; y su RUC es: "<<RUC<<endl;
}
