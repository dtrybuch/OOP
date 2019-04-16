#pragma once
#include <iostream>

/*
* Klasa urzadzenie 
* udostepnia interfejs klasom pochodnym, pozwalajacy na wypisanie rodzaju urzadzenia
*/
class Urzadzenie{
public:
    virtual std::string rodzaj() const = 0;
    virtual ~Urzadzenie(){}
};