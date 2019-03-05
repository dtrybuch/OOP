#include"Samochod.h"

Samochod::Samochod(Silnik & rodzaj, string kolor, float stanLicznika):Pojazd(rodzaj,kolor,stanLicznika,4){}

Mercedes::Mercedes(Silnik& rodzaj, float stanLicznika) :Samochod(rodzaj, "czarny metalic", stanLicznika) {}

Mercedes::Mercedes(Mercedes& mercedes)
{
	m_kolor = mercedes.m_kolor;
	m_liczbaKol = mercedes.m_liczbaKol;
	m_rodzajSilnika = mercedes.m_rodzajSilnika;
	m_stanLicznika = 0;
}

void Mercedes::Przebieg(float przebieg)
{
	m_stanLicznika = przebieg;
}

Mercedes& Mercedes::operator=(Mercedes &mercedes)
{
	if (&mercedes == this) return *this;
	else
	{
		m_kolor = mercedes.m_kolor;
		m_liczbaKol = mercedes.m_liczbaKol;
		m_rodzajSilnika = mercedes.m_rodzajSilnika;
		m_stanLicznika = 0;
		return *this;
	}
}
std::ostream & operator<<(std::ostream & ekran, Samochod& samochod)
{
	ekran << "\n";
	ekran << "Liczba kol " << samochod.getLiczbaKol()<<std::endl;
	ekran << "Stan licznika  " << samochod.getStan() <<" [km]"<< std::endl;
	ekran << "Kolor " << samochod.getKolor() << std::endl;
	return ekran;
}

