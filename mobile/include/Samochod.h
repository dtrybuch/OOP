#pragma once
#include"Pojazd.h"

class Samochod :public Pojazd {
protected:

public:
	Samochod() {}
	Samochod(Silnik & rodzaj, string kolor, float stanLicznika);
};

class Mercedes :public Samochod {
protected:

public:
	Mercedes(Silnik& rodzaj, float stanLicznika);
	Mercedes(){}
	Mercedes(Mercedes& mercedes);
	void Przebieg(float przebieg);
	Mercedes& operator=(Mercedes &mercedes);
};
std::ostream & operator<<(std::ostream & ekran, Samochod& samochod);