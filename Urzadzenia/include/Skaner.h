#pragma once
#include "Urzadzenie.h"
#include "Rozdzielczosc.h"

/*Klasa Skaner
* dziedziczy wprost po klasie Urzadzenie( nie dziedziczy po klasie Papierozerne - linia 26 wypisuje "null ptr")
* pozwala na wypisanie nazwy urzadzenia oraz jego rozdzielczosci
*/

class Skaner: virtual public Urzadzenie{
public:
    Skaner(Rozdzielczosc roz);
    std::string rodzaj() const;
    Rozdzielczosc rozdzielczosc() const ;
    virtual ~Skaner(){}
protected:
    Rozdzielczosc m_roz;
    std::string m_nazwa;
};