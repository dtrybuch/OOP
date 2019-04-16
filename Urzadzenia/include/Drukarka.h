#pragma once
#include "Papierozerne.h"
#include "Rozdzielczosc.h"

/*Klasa Drukarka
* dziedziczy po klasie Papierozerne (linia 30 wypisuje "valid ptr")
* pozwala na wypisanie nazwy urzadzenia oraz jego rozdzielczosci
*/

class Drukarka:virtual public Papierozerne{
public:
    Drukarka(Rozdzielczosc roz);
    std::string rodzaj() const ;
    Rozdzielczosc rozdzielczosc() const;
    virtual ~Drukarka(){}
protected:
    Rozdzielczosc m_roz;
    std::string m_nazwa;
};