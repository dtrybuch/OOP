#pragma once
#include "Drukarka.h"
#include "Ksero.h"
#include "Skaner.h"

/*Klasa Wielofunkcyjne
* dziedziczy wielokrotnie po klasach: Drukarka (linia 34 - valid ptr w lini 38)
                                    Ksero (linia 35 - valid ptr w linii 40)
                                    Skaner (linia 36 - valid ptr w linii 42)
* w hierarchii dziedziczenia po klasie Papierozerne (linia 33).
* Pozwala na wypisanie nazwy urzadzenia
* Konstrukcja obiektu ustawia rozdzielczosc Drukarki (arg: roz1) oraz Skanera (arg:roz2)
*/
class Wielofunkcyjne: public Drukarka, public Ksero, public Skaner{
public:
    Wielofunkcyjne(Rozdzielczosc roz1, Rozdzielczosc roz2);
    std::string rodzaj() const;
    ~Wielofunkcyjne(){}
protected:
    std::string m_nazwa;
};