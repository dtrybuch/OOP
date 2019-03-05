#pragma once
#include"Pojazd.h"
#include<string>
using std::string;

class Motorower:public Pojazd {
protected:

public:
	Motorower(){}
	Motorower(Silnik rodzajSilnika, string kolor, float stanLicznika);
};

class Romet :public Motorower {
protected:

public:
	Romet(Silnik & silnik, float stanLicznika);
	Romet(){}
	Romet(Romet& romet);
	Romet& operator=(Romet &romet);
};

std::ostream & operator<<(std::ostream & ekran, Motorower& motorower);