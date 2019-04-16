#pragma once
#include "Urzadzenie.h"

/* Klasa Papierozerne 
* definiuje urzadzenia pobierajace papier
* dziedziczy po klasie Urzadzenie (wynika to z wywolan funkcji print dla dziedziczacych po klasie Papierozerne - linie 39 i 41)
* udostepnia interfejs pochodnym klasom
*/
class Papierozerne: virtual public Urzadzenie{
public:
    virtual std::string rodzaj() const  = 0;
    virtual ~Papierozerne(){}
protected:

};