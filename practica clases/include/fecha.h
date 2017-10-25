#ifndef FECHA_H
#define FECHA_H


class fecha
{
    public:
        int dia,mes,anio;
        fecha();
        fecha(int,int,int);
        void setdia(int _dia);
        void setmes(int _mes);
        void setanio(int _anio);
        void bisiesto();
        void sumadias(int _dia);
        void mostrarfecha();

};

#endif // FECHA_H
