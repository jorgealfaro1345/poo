#include <iostream>
#include "nComplejos.h"

using namespace std;

int main()
{
    complejo a(3,9);
    complejo b(1,4);
    a.suma(b);
    a.print();

    return 0;
}
