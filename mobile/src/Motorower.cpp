#include"Motorower.h"

Motorower::Motorower(Silnik rodzajSilnika, string kolor, float stanLicznika):Pojazd(rodzajSilnika,kolor,stanLicznika,2){}

Romet::Romet(Silnik & silnik, float stanLicznika):Motorower(silnik,"czerwony metalic",stanLicznika){}

Romet::Romet(Romet& romet)
{
	m_kolor = romet.m_kolor;
	m_liczbaKol = romet.m_liczbaKol;
	m_rodzajSilnika = romet.m_rodzajSilnika;
	m_stanLicznika = 0;
}

Romet& Romet::operator=(Romet &romet)
{
	if (&romet == this) return *this;
	m_kolor = romet.m_kolor;
	m_liczbaKol = romet.m_liczbaKol;
	m_rodzajSilnika = romet.m_rodzajSilnika;
	m_stanLicznika = 0;
	return *this;
}

std::ostream & operator<<(std::ostream & ekran, Motorower& motorower)
{
	ekran << "\n";
	ekran << "Liczba kol " << motorower.getLiczbaKol() << std::endl;
	ekran << "Stan licznika  " << motorower.getStan() << " [km]" << std::endl;
	ekran << "Kolor " << motorower.getKolor() << std::endl;
	return ekran;
}
