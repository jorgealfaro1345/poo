#include "nComplejos.h"

complejo::complejo(){
    real=0;
    imag=0;
}
complejo::complejo(int x, int y){
    real=x;
    imag=y;
}
complejo complejo::suma(complejo x){
    real=real+x.real;
    imag=imag+x.imag;
}
bool complejo::igualdad(complejo x){
    if ((x.real==real)&&(x.imag==imag)){
        return true;
    }
    return false;
}
void complejo::multiplicacion(int o){
    real=real*o;
    imag=imag*o;
}
void complejo::print(){
    cout<<real<<endl;
    cout<<imag<<endl;
}

