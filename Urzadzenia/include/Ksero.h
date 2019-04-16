#pragma once
#include "Papierozerne.h"

/* Klasa Ksero
*  Dziedziczy po klasie Papierozerne (linia 35)
* pozwala na wypisanie nazwy urzadzenia
*/

class Ksero: virtual public Papierozerne{
public:
    Ksero();
    std::string rodzaj() const;
    virtual ~Ksero(){}
protected:
    std::string m_nazwa; 
};
